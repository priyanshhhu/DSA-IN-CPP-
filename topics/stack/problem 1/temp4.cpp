// string manipulation

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){

    vector<string>str;
    str.push_back("ab");
    str.push_back("ac");
    str.push_back("da");
    str.push_back("da");
    str.push_back("ac");
    str.push_back("db");
    str.push_back("ea");

    stack<string>s;
    for(int i=0; i<str.size(); i++){
        if(s.empty()){
            s.push(str[i]);
        }else if(s.top()==str[i]){
            s.pop();
        }else{
            s.push(str[i]);
        }
    }
}