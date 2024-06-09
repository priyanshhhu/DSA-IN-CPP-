// unordered set

/*
properties:
1. It stores unique elements
2. It stores data in unordered way
3. search, insert, delete -> O(1)
4. implementation: hashing
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(10);

    for(auto i = s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }

    
}

// set, multiset, unordered_set, unordered_multiset
/*
set: Unique elements
multiset: Sorted
unordered_set: Unique
unordered_multiset: 
*/
