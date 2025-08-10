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
void helper(vector<string> ans,string path,Node* root){
    if(root == NULL){
        return;
    }
    path+=to_string(root->data);
    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);
        return;
    }
     helper(ans,path+"->",root->left);
    helper(ans,path+"->",root->right);
    
}
vector<string> allroottoleafpaths(Node* root){
      vector<string> ans;
    string path;
    helper(ans,path,root);
    return ans;
}
  



int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
  cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
  vector<string> paths = allroottoleafpaths(root);
  for(string path:paths){
    cout<<path<<endl;
  }
   
    return 0;
}
