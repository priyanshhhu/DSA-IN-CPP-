#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int>l1;

    // push_back()
    l1.push_back(30);
    l1.push_back(50);
    l1.push_back(20);
    l1.push_back(40);
    l1.push_back(60);
    l1.push_back(90);

    // push_front()
    l1.push_front(100);

    // front()
    cout<<l1.front()<<endl;

    // back()
    cout<<l1.back()<<endl;

    // empty()
    cout<<l1.empty()<<endl;
    
    // pop_back()
    l1.pop_back();

    // pop_front()
    l1.pop_front();

    // size()
    cout<<l1.size()<<endl;

    // iterator
    for(auto it = l1.begin(); it!=l1.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    
    for(auto it = l1.rbegin(); it!=l1.rend(); it++){
        cout<<*it<<" ";
    }
}