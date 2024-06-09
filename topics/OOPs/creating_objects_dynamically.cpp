#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int admn;
};

int main(){
    Student *obj = new Student;

    (*obj).name = "Rohit";
    obj->roll = 21;
    obj->admn = 11558;

    cout<<obj->name<<endl;
    cout<<obj->roll<<endl;
    cout<<obj->admn<<endl;
    return 0;
}