#include <iostream>
using namespace std;

int main(){
    // print multiplication table of n number

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}