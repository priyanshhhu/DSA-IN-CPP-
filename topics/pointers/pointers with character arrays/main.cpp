#include <iostream>

using namespace std;

int main(){
    char arr[5] = "1234";
    char *ptr = arr;

    // print values
    cout<<arr<<endl;
    cout<<ptr<<endl;

    // to print addresses using (void*)
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    // print address using static_cast<void*>()
    cout<<static_cast<void*>(arr)<<endl;
    cout<<static_cast<void*>(ptr)<<endl;
    

    return 0;
}