// insertion at the end

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
    Node * head = NULL;
    if(head==NULL){
        head = new Node(5);
    }else{
        Node *curr = head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        Node*temp = new Node(5);
        curr->next = temp;
        temp->pre = curr;
    }


    // print
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}