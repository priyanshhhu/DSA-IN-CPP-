// merge two sorted linkedlist


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *pre;
    Node(int value){
        data = value;
        next = NULL;
        pre = NULL;
    }
};


int main(){
    // 1st linkedlist
    Node *head1,*tail1;
    tail1 = head1 = NULL;
    int arr[] = {1,2,3};
    for(int i=0;i<3;i++){
        if(head1==NULL){
            head1 = new Node(arr[i]);
            tail1 = head1;
        }else{
            Node *temp1 = new Node(arr[i]);
            tail1->next = temp1;
            temp1->pre = tail1;
            tail1 = temp1;
        }
    }

    // 2nd linked list
    Node *head2,*tail2;
    tail2 = head2 = NULL;
    int arr2[] = {4,5,6,7,8};
    for(int i=0;i<5;i++){
        if(head2==NULL){
            head2 = new Node(arr2[i]);
            tail2 = head2;
        }else{
            Node *temp2 = new Node(arr2[i]);
            tail2->next = temp2;
            temp2->pre = tail2;
            tail2 = temp2;
        }
    }


    // solution:
    Node *head = new Node(0);
    Node * tail = head;
    while(head1 && head2){
        if(head1->data <= head2->data){
            tail->next = head1;
            head1=head1->next;
            tail = tail->next;
            tail->next = NULL;
        }else{
            tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next = NULL;
        }
    }
    if(head1){
        tail->next = head1;
    }else{
        tail->next = head2;
    }
    tail = head;
    head=head->next;
    delete tail;

    
    cout<<"sorted linked list: "<<endl;
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}