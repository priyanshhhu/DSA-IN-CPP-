// Next greater element

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int arr[] = {8,6,4,7,4,9,10,8,12};
    int n = 9;
    vector<int>ans(n,-1);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }

    for(int i=0;i <ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
}

