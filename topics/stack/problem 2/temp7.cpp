// Stock Span problem

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int price[] = {100,80,55,70,60,75,85};
    int n = 7;
    stack<int>st;
    vector<int>ans(n);

    for(int i=0; i>=0; i--){
        while(!st.empty() && price[i]>price[st.top()]){
            ans[st.top()] = st.top()-i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        ans[st.top()] = st.top() + 1;
        st.pop();
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }


}