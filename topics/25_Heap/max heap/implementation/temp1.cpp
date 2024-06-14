// implementation

#include <iostream>

using namespace std;

class MaxHeap{
    int * arr;
    int size; // total elements in heap
    int total_size; // total size of array

    public:

    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // insertion
    void insert(int value){
        if(size==total_size){
            cout<<"Heap Overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size ++;

        // compare it with parents

        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index], arr[(index-1)/2]);
            index = (index - 1) / 2;
        }

        cout<<arr[index]<<" is inserted into the heap"<<endl;
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};

int main(){
    MaxHeap H1(10);
    H1.insert(4);
    H1.insert(10);
    H1.insert(16);
    H1.insert(38);
    H1.insert(48);
    H1.insert(19);
    H1.insert(100);
    H1.insert(12);
    H1.insert(140);
    H1.insert(183);

    H1.print();
}