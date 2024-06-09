// Implementation (using array)

#include <iostream>
#include <queue>

using namespace std;

class Queue{
    int *arr;
    int front, rear;
    int size;
    public:
    Queue(int n){
        arr = new int[n];
        front = -1, rear = -1;
        size = n; 
    }
    bool isEmpty(){
        return front == -1;
    };
    bool isFull(){
        return rear == size-1;
    }
    void push(int n){
        if(isEmpty()){
            cout<<"Pushed "<<n<<" into the Queue\n";
            front = rear = 0;
            arr[0] = n;
            return;
        }else if(isFull()){
            cout<<"Queue overflow";
            return ;
        }else{
            rear = rear+1;
            arr[rear] = n;
            cout<<"Pushed "<<n<<" into the Queue\n";
        }
    }

    // pop
    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow";
            return;
        }else{
            if(front==rear){
                cout<<"Popped "<<arr[front]<<" into the Queue\n";
                front = rear=-1;
            }else{
                cout<<"Popped "<<arr[front]<<" into the Queue\n";
                front = front+1;
            }
        }
    }

    // start
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty";
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



    int x = q.start();
    if(!q.isEmpty()){
        cout<<x<<" ";
    }
}