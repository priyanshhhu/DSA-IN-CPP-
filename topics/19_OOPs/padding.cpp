#include <iostream>

using namespace std;

class a{
    public:
    char d;
    int b;
    char c;
};

int main(){
    a obj;
    cout<<sizeof(obj)<<endl; // 12 bytes
    return 0;
}