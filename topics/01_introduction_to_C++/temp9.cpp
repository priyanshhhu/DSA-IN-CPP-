// typecasting

#include <iostream> 
using namespace std;

int main(){
    // implicit
    int a = 65;

    char c = 'b';
    c = a;

    cout<<c<<endl; 
    // A will be printed because value of variable a is 65 which is A in ASCII table when a is assigned to variable c it will get converted to character because of type-casting.
    // chances of data loss
    // if we try to store 32 bit number in 8 bit data loss will happen



    // explicit
    int a2 = 66;
    char ch = (char)a2;
    cout<<ch<<endl;

    // bool -> char -> int -> double

}
