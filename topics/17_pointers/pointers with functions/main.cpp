#include <iostream>

using namespace std;

// void incr2(int n){
//     n++;
// }


void incr(int *ptr){
    *ptr = *ptr + 1;
}

int main(){
    int n = 1;
    incr(&n);
    cout<<n<<endl;

    // incr2(n);
    // cout<<n<<endl;
}