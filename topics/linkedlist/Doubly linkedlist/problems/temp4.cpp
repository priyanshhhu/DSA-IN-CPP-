// sort a list which contain 0,1,2 (without using extra memory)

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
    Node *head,*tail;
    tail = head = NULL;
    int arr[] = {1,2,2,1,1,0,0,0,2};
    for(int i=0;i<9;i++){
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
    Node *curr = head;
    int count0 = 0, count1 = 0, count2 = 0;
    while(curr){
        if(curr->data == 0){
            count0++;
        }else if(curr->data == 1){
            count1++;
        }else{
            count2++;
        }
        curr=curr->next;
    }

    curr=head;
    while(count0--){
        curr->data = 0;
        curr=curr->next;
    }
    while(count1--){
        curr->data = 1;
        curr=curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr=curr->next;
    }


    // print
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}