// sliding window maximum (not optimized way)

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){

    int arr[] = {1,5,2,6,7,2,8,9,3,6};
    int k = 4;
    int n = 10;

    vector<int>ans;

    for(int i=0; i<n-k; i++){
        int total = INT8_MIN;
        for(int j=i; j<i+k; j++){
            total = max(total, arr[j]);
        }
        ans.push_back(total);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}