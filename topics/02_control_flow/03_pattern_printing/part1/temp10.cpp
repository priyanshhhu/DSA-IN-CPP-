#include <iostream>
using namespace std;

int main(){
    
    /* 

    a a a a a
    b b b b b
    c c c c c
    d d d d d
    e e e e e

    */


    for(int row = 1; row <= 5; row++){
        char name = 'a' + (row-1);
        for(int col = 1; col <=5; col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }


    cout<<endl;

    // another method
    for(int row = 97; row <= 102; row++){
        for(int col = 1; col <=5; col++){
            cout<<(char)row<<" ";
        }
        cout<<endl;
    }


}