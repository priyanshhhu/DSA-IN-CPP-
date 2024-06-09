// Mirror Tree

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

// code:
void Mirror(Node *root){
    if(!root){
        return;
    }
    Node *temp = root->right;
    root->right = root->left;
    root->left = temp;
    Mirror(root->left);
    Mirror(root->right);
}

int main(){
    // for first tree
    cout<<"Enter the root Node of first Tree: ";
    Node *root;
    root = BinaryTree();


    // code:
    Mirror(root);
}