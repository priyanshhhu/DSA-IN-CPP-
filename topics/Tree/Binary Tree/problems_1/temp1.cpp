// Two Trees are identical

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

// 1st Binary Tree

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }

    Node *temp1 = new Node(x);
    // left 
    cout<<"Enter the left child of "<<x<<" :";
    temp1->left = BinaryTree();

    // right
    cout<<"Enter the right child of "<<x<<" :";
    temp1->right = BinaryTree();
    
    return temp1;
}

// 2nd Binary Tree

Node* BinaryTree2(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }

    Node *temp2 = new Node(x);
    // left 
    cout<<"Enter the left child of "<<x<<" :";
    temp2->left = BinaryTree2();

    // right
    cout<<"Enter the right child of "<<x<<" :";
    temp2->right = BinaryTree2();
    
    return temp2;
}

// code:

bool IsIdentical(Node *r1, Node *r2){
    if(r1==NULL && r2==NULL){
        return 1;
    }

    if((!r1 && r2) || (r1 && !r2)){
        return 0;
    }
    
    if(r1->data!=r2->data){
        return 0;
    }

    return IsIdentical(r1->left, r2->left) && IsIdentical(r1->right, r2->right);
}

int main(){
    // for first tree
    cout<<"Enter the root Node of first Tree: ";
    Node *root1;
    root1 = BinaryTree();

    // for second tree
    cout<<"Enter the root Node of second Tree: ";
    Node *root2;
    root2 = BinaryTree2();

    // code:
    if(IsIdentical(root1,root2)==1){
        cout<<"Both the trees are identical"<<endl;
    }else{
        cout<<"Not identical"<<endl;
    }
}