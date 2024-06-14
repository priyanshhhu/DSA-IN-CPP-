#include <iostream>
using namespace std;

int main(){
    // factorial

    int n, i, fact=1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    cout<<fact<<endl;

}