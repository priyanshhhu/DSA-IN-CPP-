// Reverse a linkedlist in group of sizes

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
    int k = 4;
    Node *first = new Node(0);
    first->next = Head;
    Head = first;
    while(first->next){
        int x = k;
        Node *second = first->next;
        Node *prev = first;
        Node *curr = first->next;
        Node *front = NULL;
        while(x && curr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            x--;
        }
        first->next = prev;
        second->next = curr;
        first=second;
    }
    first = Head;
    Head = Head->next;
    delete first;

    // print
    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}