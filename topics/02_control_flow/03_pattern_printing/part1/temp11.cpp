#include <iostream>
using namespace std;

int main(){
    
    /* 

    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e

    */

    for(int i=0; i<=5; i++){
        for(char c='a'; c<='e'; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }


}