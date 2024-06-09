#include <iostream>
using namespace std;

    // creating a class
class Student{
    public:
    string name;
    int roll;
    int admn_no;
    string standard;
};

int main(){
    Student s1; // creating object
    s1.name = "Priyanshu";
    s1.roll = 21;
    s1.admn_no = 11558;
    s1.standard = "12 B";

    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.admn_no<<endl;
    cout<<s1.standard<<endl;

    Student s2; // creating second object
    s2.name = "Aman";
    s2.admn_no = 1663;
    s2.roll = 27;
    s2.standard = "12 B";

    cout<<s2.name<<endl;
    cout<<s2.roll<<endl;
    cout<<s2.admn_no<<endl;
    cout<<s2.standard<<endl;


    return 0;
}