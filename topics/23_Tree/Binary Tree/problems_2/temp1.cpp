// Left View of Binary Tree

#include <iostream>
#include <vector>
#include <queue>

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

vector<int> LeftView(Node *root){
    vector<int>ans;
    if(!root){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans.push_back(q.front()->data);
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
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

    cout<<"Enter the root Node of Tree: ";
    Node *root;
    root = BinaryTree();
    
    vector<int>ans = LeftView(root);
    printVec(ans);

}