// print bracket number

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    string s = "(aa(bdc))p(de)";

    int count = 0;
    stack<int>st;

    vector<int>ans;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            count ++;
            st.push(count);
            ans.push_back(count);
        }else if(s[i]==')'){
            ans.push_back(st.top());
            st.pop();
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
}