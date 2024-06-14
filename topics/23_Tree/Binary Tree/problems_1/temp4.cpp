// Level order traversal in spiral

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        left = right = NULL;
        data = value;
    }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }

    Node *temp = new Node(x);
    // left 
    cout<<"Enter the left child of "<<x<<" :";
    temp->left = BinaryTree();

    // right
    cout<<"Enter the right child of "<<x<<" :";
    temp->right = BinaryTree();
    
    return temp;
}

vector<int> LevelOrder(Node *root){
    stack<Node*>S1; 
    stack<Node*>S2;
    S1.push(root);
    vector<int>ans;

    while(!S1.empty() || !S2.empty()){

        // right to left
        if(!S1.empty()){
            while(!S1.empty()){
                Node* temp = S1.top();
                S1.pop();
                ans.push_back(temp->data);
                if(temp->right)
                    S2.push(temp->right);
                
                if(temp->left)
                    S2.push(temp->left);
                
            }
        }else{
            while(!S2.empty()){
                Node* temp = S2.top();
                S2.pop();
                ans.push_back(temp->data);
                if(temp->left)
                    S1.push(temp->left);
                
                if(temp->right)
                    S1.push(temp->right);
                
            }
        }

    } 
    
    return ans;
} 

void printVec(const vector<int>&vec){
    for(int elem : vec){
        cout<<elem<<" ";
    }
    cout<<endl;
}

int main(){
    // for first tree
    cout<<"Enter the root Node of Tree: ";
    Node *root;
    root = BinaryTree();

    vector<int>ans = LevelOrder(root);
    printVec(ans);

}