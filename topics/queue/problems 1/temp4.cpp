// Reverse first k element of queue

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    /*
    1. push first k elements of queue in stack
    2. store the size of queue
    3. push all the element of stack into queue
    4. push first n elements of queue at last
    */
    queue<int>q;
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(2);
    q.push(6);

    int k = 3;
    stack<int>st;
    while(k--){
        st.push(q.front());
        q.pop();
    }

    int n = q.size();

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(n--){
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
