// Minimum add to make parenthesis valid

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char>st;
    string s = "(()())))";
    int count = 0;

    for(int i=0; i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }else{
            if(st.empty()){
                count++;
            }else{
                st.pop();
            }
        }
    }
    
    cout<<count+st.size();
}