// Variables and datatypes

#include <iostream>
using namespace std;

int main(){

    // this is a variable
    /*
    variable name rules:
    1. alpha, 1-9, _
    2. should not start from number
    */

    int var = 23;

    int var2; // variable declare
    var2 = 2; // variable defined
    cout<<var2<<endl;

    int var3 = 8, var4 = 7;
    cout<<var3+var4<<endl;


    // datatypes
    /*
    1. char: 'a', 'b'
    2. int: 1,2,3,4,5,6
    3. string: "hello", "world"
    4. float: 3.14, 4.5
    5. double: 1.3434, 4.535
    6. boolean: 0, 1
    */

    // int
    // generally 4bytes or 32 bits

    int num = 34;
    cout<<num<<endl;

    
    long int num2 = 32838928; // now it can store 8byte or 64 bits
    cout<<num2<<endl;

    // char
    // generally 1 byte or 8bits

    char ch = 'a';
    char ch2 = '1'; // it is a character not a number

    cout<<ch<<endl;
    cout<<ch2<<endl;

    // char ch3 = 'ab'; // this is not allowed 


    // string

    string str = "Hello World";
    cout<<str<<endl;

    // boolean

    bool is_raining = 1;
    cout<<is_raining<<endl;

    bool is_sunny = 0;
    cout<<is_sunny<<endl;

    bool b1 = true;
    cout<<b1<<endl;
    bool b2 = false;
    cout<<b2<<endl;

    // float
    // generally 4bytes or 32 bits

    float f = 3.1;
    cout<<f<<endl;

    // double
    // generally 8bytes or 64 bits

    double d = 2.42434;
    cout<<d<<endl;

    return 0;
}