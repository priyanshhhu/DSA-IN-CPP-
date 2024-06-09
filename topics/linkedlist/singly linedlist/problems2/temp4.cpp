// check palindrome

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

    int arr[] = {1,2,3,3,2,1};
    Head = createLinkedList(arr,0,6);

    // solution:
    if(Head->next==NULL){
        return 0;
    }
    Node *temp = Head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    count/=2;
    Node *curr = Head, *prev = NULL;
    while(count--){
        prev = curr;
        curr=curr->next;
    }
    prev->next=NULL;
    Node *front = NULL;
    prev = NULL;
    while(curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr=front;
    }
    Node *head1 = Head, *head2 = prev;
    while(head1){
        if(head1->data!=head2->data){
            return 0;
        }else{
            head1 = head1->next;
            head2 = head2->next;
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