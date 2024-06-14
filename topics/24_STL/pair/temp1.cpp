// pair implementation

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<string,int>p;

    // two methods

    // first method
    p = make_pair("Priyanshu",21);
    cout<<p.first<<" "<<p.second<<endl;

    // second method
    p.first = "Priyanshu";
    p.second = 21;

    cout<<p.first<<" "<<p.second<<endl;

    // storing more than 2 values
    pair<string, pair<int,int> >p1;

    // first method
    p1.first = "Priyanshu";
    p1.second.first = 21;
    p1.second.second = 50;
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<" "<<endl;

    // second method
    p1 = make_pair("Priyanshu",make_pair(21,50));
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<" "<<endl;
}