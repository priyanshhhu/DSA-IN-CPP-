#include <iostream>
using namespace std;

int main(){

/*

       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15

*/

for(int row=1; row<=6; row++){
    for(int col=10; col<=(row+10-1); col++){
        cout<<col<<" ";
    }
    cout<<endl;
}

}