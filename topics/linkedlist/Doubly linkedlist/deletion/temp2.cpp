// Delete at end

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main(){
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
            temp->prev = tail;
            tail = temp;

        }
    }

    // deletion
    if(head!=NULL){
        // if only one node exists
        if(head->next==NULL){
            delete head;
            head = NULL;
        }
        // if more than one node exits
        else{
            Node *curr = head;
            while(curr->next){
                curr=curr->next;
            }

            curr->prev->next = NULL;
            delete curr;
        }
    }

    // print
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}