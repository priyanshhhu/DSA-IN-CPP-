#include <iostream>
using namespace std;

int main(){
    
    /* 

    1 8 27 64 125 
    1 8 27 64 125 
    1 8 27 64 125 
    1 8 27 64 125 
    1 8 27 64 125 

    */


    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <=5; col++){
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
}