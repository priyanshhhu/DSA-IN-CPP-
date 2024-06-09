#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    // print address of 1st element or 0th index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    // print values of 1st element or 0th index
    cout<<arr[0]<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    // print address of 2nd element or 1st index
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    // print all the values in array

    int arr2[5] = {1,2,3,4,5};
    int *ptr2 = arr;

    for(int i=0;i<5;i++){
        cout<<ptr2[i]<<endl;
    }

    //          or
    for(int i=0;i<5;i++){
        cout<<*(ptr2+i)<<endl;
    }



    // print all the addresses
    int arr3[5] = {1,2,3,4,5};
    int *ptr3 = arr3;

    for(int i=0;i<5;i++){
        cout<<ptr3+i<<endl;
    }

    // arithmetic operations on pointers
    // ++
    int arr4[5] = {1,2,3,4,5};
    int *ptr4 = arr4;

    for(int i=0;i<5;i++){
        cout<<*ptr4<<endl;
        ptr4++;
    }

    // --
    for(int i=5;i>=0;i--){
        cout<<*ptr4<<endl;
        ptr4--;
    }

    return 0;
}