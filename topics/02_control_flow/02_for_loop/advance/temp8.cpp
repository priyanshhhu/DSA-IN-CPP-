#include <iostream>
using namespace std;

int main(){
    // prime number or not
    int n, i;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n<2){
        cout<<"Not prime";
        return 0;
    } else{
        for(i=2; i<n; i++){
            if(n%i==0){
                cout<<"not prime";
                return 0;
            }
            cout<<"prime"<<endl;
        }
    }

}