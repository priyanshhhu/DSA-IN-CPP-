#include <iostream>
using namespace std;

int main(){
    // Print n’th Fibonacci number.

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int last = 0;
    int prev = 1;
    int curr = 1;
    for(int i=2; i<=n; i++){
        curr = prev + last;
        last = prev;
        prev = curr;
    }
    cout<<curr<<endl;
}