// reverse linkedlist(only value)

#include <iostream>
#include <vector>
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


    // reverse 
    vector<int>ans;
    Node *temp = Head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp=temp->next;
    }

    int i=ans.size()-1;
    temp=Head;
    while(temp){
        temp->data = ans[i];
        i--;
        temp=temp->next;
    };

    // print

    Node *trav = Head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}