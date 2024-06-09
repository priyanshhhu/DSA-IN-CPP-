// Multimap
/*
1. duplication is allowed
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    multimap<int , int>m;

    // insertion first method
    m.insert(make_pair(20,30));
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,50));
    m.insert(make_pair(40,70));
    m.insert(make_pair(50,90));

    // m[100] = 20; //this is not allowed in multimap

    
}