// print all elements in queue

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(7);
    q.push(9);

    vector<int>ans;
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        ans.push_back(q.front());
        q.pop();
    }

    for(int i=0;i<ans.size();i++){
        q.push(ans[i]);
    }
    
}