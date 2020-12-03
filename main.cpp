#include <iostream>
#include<vector>

struct Node{
      int info;
      Node *left, *right=NULL;
};
Node *start=NULL;

std::vector<Node*> stack;

void preorder(Node *root){
      if(root==NULL)
          {return;}
      Node *ptr=root;
      stack.push_back(root);
      while(!stack.empty()){
          ptr=stack.pop_back();
          if(ptr->right!=NULL){
              stack.push_back(ptr->right);
          }
          else{
            stack.push_back(ptr->left);
          }
          
      }
      
}

int main() {
  std::cout<<"";
}