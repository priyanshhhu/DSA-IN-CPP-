// parenthesis is valid or not

#include <iostream>
#include <stack>

using namespace std;

bool check(string str){
    stack<char>s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            s.push(str[i]);
        }else{
            if(s.empty()){
                return 0;
            }else{
                s.pop();
            }
        }
    }

    return s.empty();
}

int main(){
    
    string str = "((())())";

    if(check(str)){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }

}