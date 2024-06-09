// Check if 2 Nodes are cousin

#include <iostream>
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

// ans:

bool parent(Node* root, int a, int b){
    if(!root){
        return 0;
    }

    if(root->left && root->right){
        if(root->left->data == a && root->right->data == b){
            return 1;
        }
        if(root->left->data == b && root->right->data == a){
            return 1;
        }
    }

    return parent(root->left,a,b) || parent(root->right,a,b);
}

bool isCousin(Node *root, int a, int b){
    queue<Node*>q;
    q.push(root);
    int l1 = -1, l2 = -1;

    int level = 0;

    while(!q.empty()){
        int n = q.size();

        while(n--){
            Node *temp = q.front();
            q.pop();
            if(temp->data==a){
                l1 = level;
            }
            if(temp->data==b){
                l2 = level;
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        level ++;
        if(l1!=l2){
            return 0;
        }
        if(l1!=-1){
            break;
        }

    }

    return !parent(root,a,b);
}

int main(){
    // for first tree
    cout<<"Enter the root Node of Tree: ";
    Node *root;
    root = BinaryTree();

    if(isCousin(root,4,6)){
        cout<<"Both are cousin"<<" ";
    }else{
        cout<<"Both are not cousin"<<" ";
    }

}