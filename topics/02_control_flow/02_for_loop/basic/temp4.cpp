#include <iostream>
using namespace std;

int main(){
    // print all even numbers upto 10

    int n = 10;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

    // or

    for(int i=2; i<=n; i=i+2){
        cout<<i<<endl;
    }
}