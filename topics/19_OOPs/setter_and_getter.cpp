#include <iostream>

using namespace std;

class Student{
    string name;
    int roll;
    int admn;

    public:
    // setters
    void setname(string n){
        name = n;
    }
    void setroll(int r){
        roll = r;
    }
    void setadmn(int a){
        admn = a;
    }


    // getters
    void getname(){
        cout<<name<<endl;
    }
    void getroll(){
        cout<<roll<<endl;
    }
    void getadmn(){
        cout<<admn<<endl;
    }

    
};

int main(){

    Student s1;
    s1.setname("Priyanshu");
    s1.setroll(27);
    s1.setadmn(11558);

    s1.getname();
    s1.getroll();
    s1.getadmn();


    return 0;
}