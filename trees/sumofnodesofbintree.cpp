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

int sum(Node* root){
    if(root == NULL){
        return 0;
        }
    else{
        return root->data+sum(root->left)+sum(root->right);
    }

}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
  cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<endl;
  cout<<"The Sum Of All Nodes are ==>"<<sum(root);
   
    return 0;
}
