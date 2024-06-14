#include <iostream>
using namespace std;

int main(){
    // sum of n natural numbers

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int sum = 0;
    for(int i=n; i>=1; i--){
        sum = sum + i;
    }
    cout<<sum<<endl;

    // another logic

    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<((n*(n+1))/2)<<endl;
}