// next smaller element

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int arr[] = {7,9,12,10,14,8,3,6,9};
    int n = 9;
    stack<int>st;
    vector<int>ans(n, -1);

    for(int i = 0; i<n; i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    for(int i=0;i <ans.size(); i++){
        cout<<ans[i];
    }


}