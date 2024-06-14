#include <iostream>
using namespace std;

int main(){
    // find the power of the number 

    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int num;
    num = n;

    int power;
    cout<<"Enter the power"<<endl;
    cin>>power;

    for(int i=1; i<power; i++){
        num = num*n;
    }
    cout<<num<<endl;
}