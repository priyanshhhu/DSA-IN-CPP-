// Level Order traversal

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

int main(){
    cout<<"Enter the root Node: ";
    Node *root;
    root = BinaryTree();


    queue<Node*>q;
    q.push(root);
    vector<int>ans;

    Node *temp;
    while(q.empty()){
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<"\nLevel Order: "<<ans[i];
    }
}