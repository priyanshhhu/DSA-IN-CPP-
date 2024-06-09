// Largest Rectangle in histogram

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int arr[] = {2,3,4,2,6,5,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>right(n);
    vector<int>left(n);

    stack<int>st;

    for(int i=0; i<n; i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        right[st.top()] = n;
        st.pop();
    }

    for(int i=n-1; i>=0; i--){
        while(!st.empty() &&arr[st.top()] > arr[i]){
            left[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        left[st.top()] = -1;
        st.pop();
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        ans = max(ans, arr[i] * (right[i]-left[i]-1));
    }
    
    cout<<ans;
}