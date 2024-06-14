// // parenthesis is valid or not (without using stack)

#include <iostream>
#include <stack>

using namespace std;

bool check(string str){
    int left = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            left++;
        }else{
            if(left==0){
                return 0;
            }else{
                left--;
            }
        }
    }
    return 1;
}

int main(){
    string str = "((())())";

    if(check(str)){
        cout<<"Valid";
    } else{
        cout<<"Invalid";
    }
}