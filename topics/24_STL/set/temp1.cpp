// set

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Person{
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age<other.age;
    }
};

int main(){

    set<int>s;

    // inserting
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);
    s.insert(90);

    // find operation
    if(s.find(40) != s.end()){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }

    // iterating 
    // ascending order
    for(auto i = s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // descending order
    set<int, greater<int>>s1;

    // inserting
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);
    s1.insert(70);
    s1.insert(80);
    s1.insert(90);

    for(auto i = s1.begin(); i != s1.end(); i++){
        cout<<*i<<" ";
    }

    cout<<endl;
    
    // erase();
    s1.erase(80);

    set<Person>s2;
    Person p1,p2,p3;

    p1.age = 10, p1.name = "rohit";
    p2.age = 11, p2.name = "Priyanshu";
    p3.age = 12, p3.name = "Aman";

    s2.insert(p1);
    s2.insert(p2);
    s2.insert(p3);

    for(auto i = s2.begin(); i != s2.end(); i++){
        cout<<(*i).age<<" "<<(*i).name<<endl;
    }

}