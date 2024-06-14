#include <iostream>
using namespace std;

int main(){


// Third Pattern:
/*
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
*/

for(int i=1; i<=5; i++){
       for(int j=1; j<=6; j++){
              cout<<j*j*j<<" ";
       }
       cout<<endl;
}

}