// inserting a node at a given position

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
    // 
    Node *head,*tail;
    tail = head = NULL;

    int arr[] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->pre = tail;
            tail = temp;

        }
    }

    int pos = 2;

    // insert at start
    if(pos==0){

        // if linkedlist is not present
        if(head==NULL){
            head = new Node(5);
        }else{
        // if linkedlist exists
            Node *temp = new Node(5);
            temp->next = head;
            head->pre = temp;
            head = temp;
        }

    }else{
        Node *curr = head;
        while(--pos){
            curr = curr->next;
        };

        // insert at end
        if(curr->next == NULL){
            Node * temp = new Node(5);
            temp->pre = curr;
            curr->next = temp;
        }

        // insert at middle
        else{
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->pre = curr;
            curr->next = temp;
            temp->next->pre = temp;
        }
    }

    // print
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}
