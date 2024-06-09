// implementation using linkedlist

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

class Queue{
    Node *front;
    Node *rear;
    public:
    Queue(){
        front = rear = NULL;
    };
    bool isEmpty(){
        return front == NULL;
    }
    void push(int n){
        if(isEmpty()){
            front = new Node(n);
            rear = front;
            return;
        }else{
            rear->next=new Node(n);
            rear=rear->next;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow";
            return;
        }else{
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }else{
            return front->data;
        }
    }
};

int main(){
    Queue q;
    q.push(5);
    q.push(5);
    q.push(5);
    q.push(5);

    q.pop();
}