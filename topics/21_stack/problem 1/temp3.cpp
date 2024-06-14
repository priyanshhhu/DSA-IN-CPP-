// Make the array beautiful

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int arr[] = {4,2,-2,1};
    int size = sizeof(arr) / sizeof(arr[0]); 

    stack<int>s;
    for(int i=0;i<size;i++){
        if(s.empty()){
            s.push(arr[i]);
        }else if(arr[i]>=0){
            if(s.top()>=0){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }else{
            if(s.top()<0){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }
    }
    vector<int>ans(s.size());
    int i=s.size() - 1;

    while(!s.empty()){
        ans[i] = s.top();
        i--;
        s.pop();
    };

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}