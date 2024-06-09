// middle of linkedlist
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
    Node *temp = Head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    count/=2;
    temp=Head;
    while(count--){
        temp=temp->next;
    }


    // print
    cout<<temp->data;
    return 0;
}