// Check for balance tree
/*
What is a balance tree

-1<=height(left)-height(right)<=1
*/

#include <iostream>

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

int height(Node *root, bool &valid){
    if(!root){
        return 0;
    }

    int l = height(root->left, valid);
    int r = height(root->right, valid);

    if(abs(l-r)>1){
        valid = 0;
    }

    return 1+max(l,r);
}

bool isBalanced(Node *root){
    bool valid = 1;
    height(root, valid);
    return valid;
}

int main(){
    // for first tree
    cout<<"Enter the root Node of first Tree: ";
    Node *root;
    root = BinaryTree();

    bool valid = 1;

    height(root, valid);

    if(isBalanced(root)==1){
        cout<<"Tree is balanced"<<endl;
    }else{
        cout<<"Tree is not balanced"<<endl;
    }


}