#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


int main(){
    Node *Head;

    int arr[] = {1,2,3,4};
    for(int i=0;i<4;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
        }else{
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    Node *temp = Head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}