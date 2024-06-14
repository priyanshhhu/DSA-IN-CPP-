// Insert at Bottom

#include <iostream>
#include <stack>

using namespace std;

int main(){
    int x = 2;

    stack<int>st;
    st.push(4);
    st.push(6);
    st.push(3);
    st.push(8);
    st.push(7);

    stack<int>temp;

    while(st.empty()){
        temp.push(st.top());
        st.pop();
    }
    
    st.push(x);

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}   