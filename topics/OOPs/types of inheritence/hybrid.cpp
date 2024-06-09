#include <iostream>
using namespace std;

// student
class Student{
    public:
    void print(){
        cout<<"i am student"<<endl;
    }
};

// male
class Male{
    public:
    void malePrint(){
        cout<<"I am Male"<<endl;
    }
};

// female
class Female{
    public:
    void femalePrint(){
        cout<<"I am Female"<<endl;
    }
};
// boy
class Boy: public Student,public Male{
    public:
    void boyPrint(){
        cout<<"I am boy"<<endl;
    }
};

// girl
class Girl: public Student, public Female{
    public:
    void girlPrint(){
        cout<<"I am Girl"<<endl;
    }
};



int main(){
    Girl G1;
    G1.femalePrint();
    G1.femalePrint();
    G1.girlPrint();

    Boy B1;
    B1.boyPrint();
    B1.malePrint();
    B1.print();
    return 0;
}