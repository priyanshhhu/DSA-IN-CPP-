#include <iostream>
using namespace std;

int main(){

    try{
        int *p = new int[100000000000000000];
        cout<<"Memory allocation is successfull";
        delete []p;
    }catch(const exception *e){
        cout<<"Exception ocurred: "<<e->what()<<endl;
    }

    return 0;
}