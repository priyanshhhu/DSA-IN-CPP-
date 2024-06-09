#include <iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<"my name is : "<<name<<endl;
    }
};

class Engineer:public virtual Human{
    public:
    string specilization;

    void work(){
        cout<<"I have specilization in :"<<specilization<<endl;
    }
};

class Youtuber:public virtual Human{
    public:
    int subs;

    void contentcreator(){
        cout<<"I have subs: "<<subs<<endl;
    }
};

class Teacher: public Engineer, public Youtuber, public virtual Human{
    public:
    int salary;

    Teacher(){

    };

    Teacher(string name, string specilization, int subs,int salary){
        this->name = name;
        this->specilization = specilization;
        this->subs = subs;
        this->salary = salary;
    }

};

int main(){

    Teacher A1("Priyanshu","CSE",49000,899);
    A1.display();

    return 0;
}