// remove nth node from end


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

    int arr[] = {2,4,6,8,10};
    Head = createLinkedList(arr,0,5);

    // solution:
    int count = 0;
    int N = 2;
    Node *temp = Head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    count-=N;
    if(count==0){
        temp = Head;
        Head = Head->next;
        delete temp;
    }
    Node *curr = Head, *prev = NULL;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;


    // print
    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}