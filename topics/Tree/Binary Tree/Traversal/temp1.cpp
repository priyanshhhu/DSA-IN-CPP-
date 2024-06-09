// Pre, In, Post Order traversal

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

// Pre Order traversal

void PreOrder(Node *root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

// In Order traversal

void InOrder(Node *root){
    if(root==NULL){
        return;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// Post Order traversal

void PostOrder(Node *root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

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

int main(){
    cout<<"Enter the root Node: ";
    Node *root;
    root = BinaryTree();

    // PreOrder
    cout<<"Pre Order: ";
    PreOrder(root);

    // InOrder
    cout<<"\nIn Order: ";
    InOrder(root);

    // PostOrder
    cout<<"\nPost Order: ";
    PostOrder(root);
    cout<<endl;
}