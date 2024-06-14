// Rotate linkedlist

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


Node* createLinkedList(int arr[],int index,int size){
    // base case
    if(index==size){
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);

    return temp;
}

int main(){
    Node *Head;
    Head = NULL;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Head = createLinkedList(arr,0,10);

    // solution:
    int k = 2;
    int count = 0;
    if(Head==NULL || Head->next==NULL){
        return 0;
    }
    Node *temp = Head;
    while(temp){
        count++;
        temp=temp->next;
    }
    k=k%count;
    if(k==0){
        return 0;
    }
    count-=k;

    Node *curr = Head, *prev = NULL;
    while(count--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    Node *tail = curr;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = Head;
    Head = curr;


    // print
    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}