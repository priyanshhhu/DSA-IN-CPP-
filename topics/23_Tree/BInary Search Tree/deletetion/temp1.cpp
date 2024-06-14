// delete operation

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

Node* deleteNode(Node* root, int target){
    if(!root){
        return NULL;
    }
    if(root->data > target){
        deleteNode(root->left, target);
        return root;
    }
    else if(root->data < target){
        deleteNode(root->right, target);
        return root;
    }
    else{
        // leaf node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // one child exist
        // left child exist
        else if(!root->right){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        // right child exist
        else if(!root->left){
            Node * temp = root->right;
            delete root;
            return temp;
        }
        // both child exist
        Node *child = root->left;
        Node *parent = root;

        while(child->right){
            parent = child;
            child = child->right;
        }   
        if(root!=parent){
            parent->right = child->left;
            child->left = root->left;
            child->right = root->right;
            delete root;
            return child;
        }else{
            child->right = root->right;
            delete root;
            return child;
        }
    }
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

    deleteNode(root, 7);

    // Traversal
    inorder(root);

}