#include <iostream>
using namespace std;

int main(){


    // Print Sum of cube of first n natural number

    int m;
    cout<<"Enter the number: ";
    cin>>m;
    int sum = 0;
    for(int d=1; d<=m; d++){
        sum = sum + (d*d*d);
    }
    cout<<sum<<endl;

}