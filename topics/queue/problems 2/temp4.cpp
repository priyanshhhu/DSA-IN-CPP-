// First non repeating char in a stream of characters

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    string a = "ababdc";

    queue<char>q;

    string b = "";

    vector<int>repeated(26,0);

    for(int i=0; i<a.size(); i++){
        if(repeated[a[i]-'a']>=1){
            repeated[a[i]-'a']++;
            while(!q.empty() && repeated[q.front()-'a']>1){
                q.pop();
            }

            if(q.empty()){
                b+="#";
            }else{
                b+=q.front();
            }
        }else{
            repeated[a[i]-'a']++;
            q.push(a[i]);
            while(repeated[q.front()-'a']>1){
                q.pop();
            }
            b+=q.front();
        }
    }

    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    return 0;
}