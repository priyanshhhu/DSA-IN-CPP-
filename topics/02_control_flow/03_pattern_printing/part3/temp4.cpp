#include <iostream>
using namespace std;

int main(){

/*

        A 
      A B 
    A B C 
  A B C D 
A B C D E

*/

for(int row=1; row<=5; row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }

    for(int col=1; col<=row; col++){
         cout<<(char)('A'+col-1)<<" ";
    }
    cout<<endl;
}

// another approach

for(int row=1; row<=5; row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }

    for(char name='A'; name<='A'+row-1; name++){
        cout<<name<<" ";
    }
    cout<<endl;
}


// another approach

for(int row=1; row<=5; row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }

    for(int col=1; col<=row; col++){
        char name = 'A'+col-1;
        cout<<name<<" ";
    }
    cout<<endl;
}

}