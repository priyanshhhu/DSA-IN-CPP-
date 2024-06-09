// Time needed to buy tickets

#include <iostream>
#include <queue>

using namespace std;

int main(){

    /*
    steps:

    1. push all index in queue
    2. set time = 0;
    3. bahar nikalo aur ticket dedo
    4. increase time ++
    5. number of ticket ko minus kr do
    6. ticket ki requirement hai -> line me lag jao -> check k -> agar k sahi hai to return kar do
    7. ticket ki requirement nhi hai -> line se bahar kar do
    */


   queue<int>q;
   int k = 2;
   int n = q.size();

   for(int i=0;i<n;i++){
        q.push(i);
   }

   int time = 0;

   while(ticket[k]!=0){
        
   }    
}