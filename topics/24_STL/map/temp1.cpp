// map

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    // map creation
    map<int , int>m;

    // insertion first method
    m.insert(make_pair(20,30));
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,50));
    m.insert(make_pair(40,70));
    m.insert(make_pair(50,90));

    // insertion second method
    m[100] = 60;

    // updating
    m[20] = 200;

    // count()
    if(m.count(20)){
        cout<<m[20]<<endl;
    }

    // erase()
    m.erase(50);
       
    // iterating
    for(auto i = m.begin(); i != m.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }


}