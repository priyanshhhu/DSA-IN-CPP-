#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    Complex(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void display(){
        cout<<real<<" +i"<<imaginary<<endl;
    }

    Complex(){

    }

    Complex operator+(Complex&C){
        Complex ans;
        ans.real = real + C.real;
        ans.imaginary = imaginary + C.imaginary;
        return ans;
    }
};

int main(){
    Complex C1(3,1);
    Complex C2(4,6);
    Complex C3 = C1 + C2;
    C3.display();

}