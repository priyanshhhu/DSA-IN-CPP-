#include <iostream>
using namespace std;

class Engineer{
    public:
    string specilization;

    void work(){
        cout<<"I have specilization in :"<<specilization<<endl;
    }
};

class Youtuber{
    public:
    int subs;

    void contentcreator(){
        cout<<"I have subs: "<<subs<<endl;
    }
};

class Teacher: public Engineer, public Youtuber{
    public:
    string name;

    Teacher(string name, string specilization, int subs){
        this->name = name;
        this->specilization = specilization;
        this->subs = subs;
    }

    void display(){
        cout<<"My name is :"<<name<<endl;
        work();
        contentcreator();
    }
};

int main(){

    Teacher A1("Priyanshu","CSE",49000);
    A1.display();

    return 0;
}