#include <iostream>
using namespace std;

int main(){

    // if else
    // if package is greater than or equal to 1000000 print accept else reject

    int package = 1500000;

    if(package>=1000000){
        cout<<"accept"<<endl;
    }else{
        cout<<"rejected"<<endl;
    }

    //accept user input and check if percentage is greater than 33 print pass else fail

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>=33){
        cout<<"pass"<<endl;
    }else{
        cout<<"fail"<<endl;
    }

    // if a is greater than b print yes if a is not greater than b print no

    int a = 8;
    int b = 9;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }else{
        cout<<"a is not greater than b"<<endl;
    }

    // check whether a number is even or not

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }

    // check if number is positive, negative or zero

    int num2;
    cout<<"enter the number: ";
    cin>>num2;

    if(num2>0){
        cout<<"positive"<<endl;
    }else{
        if(num2==0){
            cout<<"zero"<<endl;
        }else{
            cout<<"negative"<<endl;
        }
    }

    int num3;
    cout<<"Enter the Number: "<<endl;
    cin>>num3;

    if(num3>0){
        cout<<"positive"<<endl;
    }else if(num3==0){
        cout<<"zero"<<endl;
    }else{
        cout<<"negative"<<endl;
    }


    // check if character is vowel or consonant

    char c1 = 'a';
    if(c1=='a'){
        cout<<"vowel"<<endl;
    }else if(c1=='e'){
        cout<<"vowel"<<endl;
    }else if(c1=='i'){
        cout<<"vowel"<<endl;
    }else if(c1=='o'){
        cout<<"vowel"<<endl;
    }else if(c1=='u'){
        cout<<"vowel"<<endl;
    }else{
        cout<<"consonant"<<endl;
    }

    char c = 'd';
    if(c=='a' || c=='e' || c == 'i' || c=='o' || c == 'u'){
        cout<<"c is vowel"<<endl;
    }else{
        cout<<"c is consonant"<<endl;
    }


    // if input is 1 print monday, if 2 print tuesday, ....

    int week;
    cout<<"Enter week number"<<endl;
    cin>>week;

    if(week=='1'){
        cout<<"Monday";
    }else if(week=='2'){
        cout<<"Tuesday";
    }else if(week=='3'){
        cout<<"Wednesday";
    }else if(week=='4'){
        cout<<"Thursday";
    }else if(week=='5'){
        cout<<"Friday";
    }else if(week=='6'){
        cout<<"Saturday";
    }else if(week=='7'){
        cout<<"Sunday";
    }else{
        cout<<"Enter valid day";
    }

}

