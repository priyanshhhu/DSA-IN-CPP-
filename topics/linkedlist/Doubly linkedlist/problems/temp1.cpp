// remove duplicate element from list

#include <iostream>
#include <vector>
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
    vector<int>ans;
    ans.push_back(head->data);
    Node *curr = head->next;
    while(curr){
        if(ans[ans.size()-1]!=curr->data){
            ans.push_back(curr->data);
        }
        curr=curr->next;
    }

    curr = head;
    int index = 0;
    while(index<ans.size()){
        curr->data = ans[index];
        index++;
        curr=curr->next;
    }

    int size = ans.size()-1;
    curr = head;
    while(size--){
        curr=curr->next;
    }
    curr->next = NULL;


    // print
    Node *trav = head;
    while(trav){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}