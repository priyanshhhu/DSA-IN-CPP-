// Reverse array (using stack)

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    stack<char>st;
    vector<char>s;
    s.push_back('h');
    s.push_back('e');
    s.push_back('l');
    s.push_back('l');
    s.push_back('o');

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }

    int i = 0;

    while(!st.empty()){
        s[i] = st.top();
        i++;
        st.pop();
    }

    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }


}