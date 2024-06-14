// Next greater element (2nd method)

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int arr[] = {8,6,4,7,4,9,10,8,12};
    int n = 9;
    vector<int>ans(n,-1);
    stack<int>st;

    for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] < arr[i]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
    }

    for(int i=0;i <ans.size(); i++){
        cout<<ans[i];
    }
}

