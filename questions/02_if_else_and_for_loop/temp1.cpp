#include <iostream>
using namespace std;

int main(){
    // If-else

// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
int a = 8;
int b = 3;
if(a>b){
    cout<<"a is greater than b"<<endl;
}else{
    cout<<"b is greater than a"<<endl;
}

// Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
int age_of_person = 18;
if(age_of_person>18){
    cout<<"adult"<<endl;
}else{
    cout<<"teenager"<<endl;
}

// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
int n;
cout<<"enter a number from 1 to 12:"<<endl;
cin>>n;
if(n==1){
    cout<<"January"<<endl;
}else if(n==2){
    cout<<"February"<<endl;
}else if(n==3){
    cout<<"March"<<endl;
}else if(n==4){
    cout<<"April"<<endl;
}else if(n==5){
    cout<<"May"<<endl;
}else if(n==6){
    cout<<"June"<<endl;
}else if(n==7){
    cout<<"July"<<endl;
}else if(n==8){
    cout<<"August"<<endl;
}else if(n==9){
    cout<<"September"<<endl;
}else if(n==10){
    cout<<"October"<<endl;
}else if(n==11){
    cout<<"November"<<endl;
}else{
    cout<<"December"<<endl;
}

// Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
int age;
cout<<"Enter your age: "<<endl;
cin>>age;
if(age<12){
    cout<<"Yes!! You are eligible for discount"<<endl;
}else if(age>65){
    cout<<"Yes!! You are eligible for discount"<<endl;
}else{
    cout<<"You are not eligible for discount"<<endl;
}


    //  For Loop

// Print “India will win the World Cup 2024”, 20 times.
for(int i=1; i<=20; i++){
    cout<<"India will win the World Cup 2024"<<endl;
}

// Print all Odd numbers from 1 to n, take n as an input from the user.
int num;
cout<<"Enter the number: "<<endl;
cin>>num;
for(int j=1; j<num; j++){
    if(j%2!=0){
        cout<<j<<endl;
    }
}

// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
int num2;
cout<<"Enter the number: "<<endl;
cin>>num2;
for(int k=1; k<num2; k++){
    if(k%4==0){
        cout<<k<<endl;
    }
}

}