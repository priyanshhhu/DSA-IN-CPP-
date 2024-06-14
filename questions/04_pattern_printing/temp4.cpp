#include <iostream> 
using namespace std;

int main(){

// Fourth Pattern:
/*
    F G H I J K  
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
*/

for(int i=1; i<=5; i++){
    for(char c='F'; c<='K'; c++){
        cout<<c<<" ";
    }
    cout<<endl;
}

}