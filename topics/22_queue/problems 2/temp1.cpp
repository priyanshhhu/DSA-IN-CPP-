// Print all numbers in every window of size k

#include <iostream>
#include <queue>

using namespace std;

void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    /*
    steps:
    1. push that index element.
    2. print the queue
    4. pop first element
    */

   int k = 3;

   int arr[] = {1,2,3,4,5,6};
   int n = 6;

   queue<int>q;

   for(int i=0; i<k-1; i++){
        q.push(arr[i]);
   }

    for(int i = k-1; i<n; i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

}