// clone a linkedlist (using random pointer)

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* arb;

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


    // solution
    // steps:
    /*
    1. create all nodes without random pointer
    2. assign random pointer from start
    */
   Node *headcopy = new Node(0);
   Node *tailcopy = headcopy;
   Node *temp = Head;
   

    // print
    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}