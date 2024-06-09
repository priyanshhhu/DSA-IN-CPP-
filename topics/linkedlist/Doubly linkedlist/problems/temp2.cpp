// remove duplicate element from list (2nd method)

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

    int arr[] = {1,2,2,3,3,4,5};
    for(int i=0;i<7;i++){
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


    // solution:
    Node *curr = head->next;
    Node *prev = head;
    while(curr){
        if(curr->data == prev->data){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }else{
            prev = prev->next;
            curr = curr->next;
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