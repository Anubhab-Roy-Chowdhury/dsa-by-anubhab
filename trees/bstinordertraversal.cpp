#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(Node* root){
    if(root == NULL){
    return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->right->data<<" ";

}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    inorder(root);
   
    return 0;
}
