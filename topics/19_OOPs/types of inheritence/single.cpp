#include <iostream>

using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"I am Working"<<endl;
    }
};

class Student: public Human{
    int roll,fees;
    public:
    Student(string name, int age, int roll, int fees){
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->fees = fees;
    }
};

int main(){
    Student A1("Priyanshu",17,21,200);
    A1.work();
    return 0;
}