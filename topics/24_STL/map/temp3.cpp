// Unordered map
/*
1. Unique keys are present, duplicate keys are not allowed
2. but order is not valid
3. hashing
4. insert, search, delete -> O(1)
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int , int>m;

    // insertion first method
    m.insert(make_pair(20,30));
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,50));
    m.insert(make_pair(40,70));
    m.insert(make_pair(50,90));

    m[100] = 20;

}