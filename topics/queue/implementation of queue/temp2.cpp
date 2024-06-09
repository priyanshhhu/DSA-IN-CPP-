// Circular queue

#include <iostream>

using namespace std;

class Queue{
    int *arr;
    int front, rear, size;
    public:
    Queue(int n){
        arr = new int(n);
        size = n;
        front = rear = -1;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return (rear+1)%size == front;
    }
    void push(int n){
        if(isEmpty()){
            cout<<"Pushed "<<n<<" Into the Queue\n";
            front = rear = 0;
            arr[0] = n;
            return;
        }else if(isFull()){
            cout<<"Queue overflow";
            return;
        }else{
            rear = (rear+1)%size;
            arr[rear] = n;
            cout<<"Pushed "<<n<<" into the Queue\n";
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue Underflow\n";
            return;
        }else{
            if(front == rear){
                cout<<"Popped "<<arr[front]<<" into the Queue";
                front = rear = -1;
            }else{
                cout<<"Popped "<<arr[front]<<" into the Queue";
                front = (front+1)%size;
            }
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return -1;
        }else{
            return arr[front];
        }
    }
};

int main(){
    Queue q(5);
    q.push(5);
    q.push(34);
    q.push(10);

    q.pop();


}