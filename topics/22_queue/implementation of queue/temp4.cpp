// stl 

/*

push
pop
size
front
empty

*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(7);
    q.push(9);

    cout<<"size of the queue "<<q.size()<<endl;

    cout<<"front element is "<<q.front()<<endl;

    cout<<"queue is empty? "<<q.empty()<<endl;
}