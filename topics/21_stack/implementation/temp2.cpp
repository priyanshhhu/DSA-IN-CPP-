// implementation of stack (using linkedlist)

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

class Stack{
    Node *top;
    int size;
    public:

    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node *temp = new Node(value);
        if(temp==NULL){
            cout<<"stack overflow\n";
        }else{
            temp->next = top;
            top=temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"stack underflow\n";
        }else{
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    // top operation
    int peek(){
        if(top==NULL){
            cout<<"stack is empty\n";
            return -1;
        }else{
            return top->data;
        }
    }

    // empty

    bool isEmpty(){
        return top==NULL;
    }

    // size
    int isSize(){
        return size;
    }

};

int main(){
    Stack S;
    S.push(6);
    S.push(4);
    S.push(8);
    S.push(2);

    S.pop();

    cout<<S.isSize()<<endl;

    cout<<S.peek()<<endl;

    cout<<S.isEmpty();
}