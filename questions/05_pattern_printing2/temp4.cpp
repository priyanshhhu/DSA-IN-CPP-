#include <iostream>
using namespace std;

int main(){

/*

      A B C D
      A B C
      A B
      A

*/


    for(int row=4; row>=1; row--){
        for(int col=0; col<row; col++){
        cout<<(char)(col+'A')<<" ";
        }
        cout<<endl;
    }



}