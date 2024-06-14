// The celebrity Problem

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        st.push(i);
    }
    while(st.size()>1){
        int first = st.top();
        st.pop();
        int second = st.top();
        st.pop();
    }
    
    return 0;
}