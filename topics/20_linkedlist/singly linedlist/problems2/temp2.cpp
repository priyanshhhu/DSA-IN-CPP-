// remove every k node

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
    int k = 3;
    if(k==1){
        return 0;
    }
    Node *curr = Head, *prev = NULL;
    int count = 1;
    while(curr){
        if(k==count){
            prev->next = curr->next;
            delete curr;
            curr=prev->next;
            count=1;
        }else{
            prev = curr;
            curr = curr->next;
            count++;
        }
    }


    // print
    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}