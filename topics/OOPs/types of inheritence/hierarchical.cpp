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

class Teacher:public Human{
    int salary;

    public:
    Teacher(string name,int age,int salary){
        this->name = name;
        this->salary = salary;
        this->age=age;
    }

    void display(){
        cout<<"name is: "<<name<<"age is : "<<age<<"salary is: "<<salary<<endl;
    }
};

int main(){
    Student A1("Priyanshu",17,21,200);
    
    Teacher A2("Mohit",20,200);
    A2.display();
    return 0;
}