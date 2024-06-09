// implementation of stack (using arrays)

#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
    public:

    bool flag;

    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    // push operation
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow\n";
            return;
        }else{
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack\n";
            flag = 0;
        }
    }

    // pop operation
    void pop(){
        if(top==-1){
            cout<<"stack underflow\n";
            return;
        }else{
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack\n";
            if(top==-1){
                flag=1;
            }
        }
    }

    // top operation
    int peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }else{
            return arr[top];
        }
    }

    // empty operation
    bool isEmpty(){
        return top==-1;
    }

    // size operation
    int isSize(){
        return top+1;
    }
};



int main(){
    Stack S(5);

    // S.push(5);
    // S.push(6);
    // S.push(8);

    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();
    // S.pop();

    // cout<<S.peek()<<endl;

    // cout<<S.isEmpty()<<endl;

    // cout<<S.isSize()<<endl;

    S.push(-1);
    int value = S.peek();
    if(S.flag==0)
    cout<<value<<endl;
}