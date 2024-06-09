// Deletion of specific node

// Delete a Node
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
    int x = 3;

    // Delete particular Node
    if(x==1){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    x--;
    Node *curr = Head;
    Node *prev = NULL;

    while(x--){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;


    // printing
    Node *temp;
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}