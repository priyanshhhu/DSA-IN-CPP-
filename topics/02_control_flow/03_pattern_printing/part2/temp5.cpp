#include <iostream>
using namespace std;

/*

a 
b b 
c c c 
d d d d 
e e e e e 

*/

int main(){

    for(int row=1; row<=5; row++){
        for(int col=1; col<=row; col++){
        char name = 'a' + (row - 1);
            cout<<name<<" ";
        }
        cout<<endl;
    }

}   