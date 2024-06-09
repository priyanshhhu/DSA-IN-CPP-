// stack stl

#include <iostream>
#include <stack>

using namespace std;



int main(){

    stack<int>S;

    S.push(5);
    S.push(4);
    S.push(3);
    S.push(7);

    S.pop();

    int value = S.top();
    cout<<value;
}