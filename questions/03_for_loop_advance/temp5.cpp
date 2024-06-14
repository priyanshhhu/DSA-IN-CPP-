#include <iostream>
using namespace std;

int main(){

    // Print Sum of square of first n natural number.
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    for(int c=1; c<=n; c++){
        sum = sum + (c*c);
    }
    cout<<sum<<endl;
    
}