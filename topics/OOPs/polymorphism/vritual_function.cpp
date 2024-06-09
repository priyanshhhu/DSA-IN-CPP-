#include <iostream>
#include <vector>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Huhu";
    }

    // virtual void speak() = 0; // abstract class or pure virtual function
    
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bark";
    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meow";
    }
};

int main(){
    // Animal *p;
    // p = new Dog();
    // p->speak();

    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0;i<animals.size();i++){
        p = animals[i];
        p->speak();
    }


}