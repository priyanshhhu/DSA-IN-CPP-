#include <iostream>
// #include <string>
using namespace std;

int main(){
    // // char array
    // char arr[5] = {'a','p','p','l','e'};
    // cout<<arr<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    //     cout<<endl;
    // }

    // // 1. string initialization
    // string s;
    // cin>>s;
    // cout<<s<<endl;

    // // string initialization and declaration
    // string s1 = "hello world";
    // cout<<s1<<endl;

    // // getline()
    // string s2;
    // getline(cin,s2);
    // cout<<s2;

    // // size()
    // cout<<s2.size();

    // // concatination
    // string s3 = "hello";
    // string s4 = "world";
    // string s5 = s3 + s4;

    // cout<<s5;

    // push_back()
    string s6 = "hello";
    s6.push_back('w');
    cout<<s6<<endl;

    // pop_back()
    s6.pop_back();
    cout<<s6<<endl;
    return 0;
}