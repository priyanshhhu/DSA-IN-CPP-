// print all elements in queue in order of 1 time complexity

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(2);
    q.push(6);

    int n = q.size();
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }

}