// deletion
// max heap -> deletion -> top node -> replace with last node
// this process is also called heapify 

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

    void Heapify(int index){
        int largest = index;
        int left = 2*index + 1;
        int right = 2*index + 2;

        // largest will store the index of the element which is greater between parent left child and right child

        if(left<size && arr[left]>arr[largest]){
            largest = left;
            if(right<size && arr[right]>arr[largest]){
                largest = right;
            }
        }

        if(largest != index){
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }

        
    }

    void Delete(){
        if(size==0){
            cout<<"Heap Underflow\n";
            return;
        }
        cout<<arr[0]<<" deleted from the heap";

        arr[0] = arr[size-1];
        size--;

        if(size==0){
            return;
        }
        Heapify(0);
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