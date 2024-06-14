#include <iostream>
using namespace std;

int main(){
    // how to print a address of a variable

    int a = 10;
    cout<<&a<<endl;

    // storing an address of a variable in a pointer

    int b = 20;
    int *ptr = &b;

    cout<<"address of a is : "<<&a<<endl;
    cout<<"address of a is : "<<ptr<<endl;

    char c = 'a';
    char *ptr1 = &c;

    // printing value using pointer

    int *ptr2;
    int d = 20;
    ptr2 = &d;

    cout<<"value of b is :"<<*ptr2<<endl;

    return 0;
}