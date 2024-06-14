// implementation Deque (using array)

#include <iostream>

using namespace std;

class Deque{
    int front, rear, size;
    int *arr;

    public:

    Deque(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return (rear+1)%size==front;
    }

    // push front
    void push_front(int x){
        // empty
        if(isEmpty()){
            front = rear = 0;
            cout<<"Pushed "<<x<<" in front"<<endl;
            arr[0] = x;
            return;
        }

        // full
        else if(isFull()){
            cout<<"Deque overflow\n";
        }

        // normal case
        else{
            front = (front-1+size)%size;
            arr[front] = x;
            cout<<"Pushed "<<x<<" in front"<<endl;
            return;
        }
    }

    // push back
    void push_back(int x){
        // empty
        if(isEmpty()){
            front = rear = 0;
            cout<<"Pushed "<<x<<" in back"<<endl;
            arr[0] = x;
            return;
        }

        // full
        else if(isFull()){
            cout<<"Deque overflow\n";
        }

        // normal case
        else{
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" in back"<<endl;
            return;
        }
    }

    // pop front
    void pop_front(){
        if(isEmpty()){
            cout<<"Deque Underflow"<<endl;
            return;
        }else{
            cout<<"Popped "<<arr[front]<<" from front"<<endl;
            // single element
            if(front==rear){
                front = rear = -1;
            }
            // greater than one element
            else{
                front = (front+1)%size;
            }
        }
    }

    // pop back
    void pop_back(){
        if(isEmpty()){
            cout<<"Deque Underflow"<<endl;
            return;
        }else{
            cout<<"Popped "<<arr[rear]<<" from back"<<endl;
            // single element
            if(front==rear){
                front = rear = -1;
            }
            // greater than one element
            else{
                rear = (rear-1+size) %size;
            }
        }
    }

    // start
    int start(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[front];
        }
    }

    // end
    int end(){
        if(isEmpty()){
            return -1;
        }else{
            return arr[rear];
        }
    }

};

int main(){
    Deque d(5);
    d.push_back(10);
    d.push_back(9);

    d.push_front(6);

    d.pop_back();
    d.pop_front();

    cout<<d.start();


}