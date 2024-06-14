// implementation of deque (using linkedlist)

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next, *prev;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

class Deque{
    Node *front, *rear;
    public:

    Deque(){
        front = rear = NULL;
    }

    // push front
    void push_front(int x){
        if(front==NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in front of deque\n";
        }else{
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            cout<<"Pushed "<<x<<" in front of deque\n";
        }
    }

    // push back
        void push_back(int x){
        if(front==NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in back of deque\n";
        }else{
            Node *temp = new Node(x);
            rear->next =temp;
            temp->prev = rear;
            rear = temp;
            cout<<"Pushed "<<x<<" in back of deque\n";
            return;
        }
    }

    // pop front
    void pop_front(){
        if(front == NULL){
            cout<<"Deque Underflow\n";
            return;
        }else{
            Node *temp = front;
            cout<<"Popped "<<temp->data<<" from front"<<endl;
            front = front->next;
            delete temp;
            // if more than one node is present
            if(front){
                front->prev = NULL;
            }
            // if only one node is present
            else{
                rear = NULL;
            }
        }
    }

    // pop back
    void pop_back(){
        if(front == NULL){
            cout<<"Deque Underflow\n";
            return;
        }else{
            Node *temp = rear;
            cout<<"Popped "<<temp->data<<" from back"<<endl;
            rear = rear->prev;
            delete temp;
            // if more than one node is present
            if(rear){
                rear->next = NULL;
            }
            // if only one node is present
            else{
                front = NULL;
            }
        }
    }

    // start
    int start(){
        if(front==NULL){
            return -1;
        }else{
            return front->data;
        }
    }

    // end
    int end(){
        if(front==NULL){
            return -1;
        }else{
            return rear->data;
        }
    }
};

int main(){
    Deque d;
    d.push_back(5);
    d.push_front(8);
    cout<<d.start()<<endl;
    d.pop_back();

    d.pop_back();
    d.pop_back();
}