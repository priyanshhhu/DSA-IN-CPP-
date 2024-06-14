// get minimum at top

#include<iostream>
#include<stack>

using namespace std;

stack<int> push(int arr[], int n){
    stack<int>st;
    for(int i=0; i<n; i++){
        if(i==0){
            st.push(arr[i]);
        }else{
            st.push(min(arr[i],st.top()));
        }
    }

    return st;
}

void getminatpop(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    int arr[] = {2,1,3,5,0,6};
    stack<int>s = push(arr,6);

    getminatpop(s);
}