// searching

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

bool search(Node *root, int target){
    if(!root){
        return 0;
    }
    if(root->data == target){
        return 1;
    }
    if(root->data > target){
        return search(root->left, target);
    }else{
        return search(root->right, target);
    }
}

int main(){
    int arr[] = {3,7,4,1,6,8};
    Node *root = NULL;
    for(int i = 0; i<6; i++){
        root = insert(root, arr[i]);
    }

    if(search(root, 10)==1){
        cout<<"target is present in binary search tree"<<endl;
    }else{
        cout<<"target is not present in the binary seach tree"<<endl;
    }
}