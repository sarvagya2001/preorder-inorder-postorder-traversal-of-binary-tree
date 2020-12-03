#include <iostream>
#include<vector>

struct Node{
      int info;
      Node *left, *right=NULL;
};
Node *start=NULL;

std::vector<Node *> stack;   //dynamic stack using vectors with structure type Node *

// creates a node 
Node *create(int data){
      Node *n=new Node();
      n->info=data;
      n->left=n->right=NULL;
    return n;
}

//PreOrder traversal of a given binary tree
void preorder(Node *root){
      if(root==NULL)
          {return;}
      Node *ptr=root;
      stack.push_back(root);        // push the root to the empty stack
      while(!stack.empty()){
          Node *ptr=stack.back();
          std::cout<<ptr->info<<" ";
          if(ptr->right!=NULL){
              stack.push_back(ptr->right);
          }
          else if(ptr->left!=NULL){
            stack.push_back(ptr->left);
          }
          else{
            break;
          }
          
      }
return;
}

int main() {
  std::cout<<"";
}