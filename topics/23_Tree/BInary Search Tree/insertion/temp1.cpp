// 

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root, int value){
    if(!root){
        Node *temp = new Node(value);
        return temp;
    }
    if (value<root->data){   
        root->left = insert(root->left,value);
    }else{
        root->right = insert(root->right,value);
    }
    return root;
}

void inorder(Node* root){
    if(!root){
        return;
    }
    // left side
    inorder(root->left);
    // Node
    cout<<root->data<<" ";
    // Right side
    inorder(root->right);
}

int main(){
    int arr[] = {3,7,4,1,6,8};
    Node *root = NULL;
    for(int i = 0; i<6; i++){
        root = insert(root, arr[i]);
    }

    // Traversal
    inorder(root);
}