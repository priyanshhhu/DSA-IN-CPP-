// valid parenthesis

#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s = "[]{()}{[]}";
    stack<char>st;

    for(int i=0; i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return 0;
            }else if(s[i]==')'){
                if(st.top()!='('){
                    return 0;
                }else{
                    st.pop();
                }
            }else if(s[i]=='}'){
                if(st.top()!='{'){
                    return 0;
                }else{
                    st.pop();
                }
            }else{
                if(st.top()!='['){
                    return 0;
                }else{
                    st.pop();
                }
            }
        }
    }
}