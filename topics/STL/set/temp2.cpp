// multiset

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
properties:
1. Sorted order
2. duplicate elements will be present
3. red-black tree, AVL tree
*/

int main(){

    multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(10);

    // erase()
    s.erase(10); // both 10 will be erased

    // iterating
    for(auto i = s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

}