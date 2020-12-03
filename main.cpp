#include <iostream>
#include <vector>

struct Node{
      int info;
      Node *left, *right=NULL;
};
Node *start=NULL;
int count=0;

std::vector<Node *> stack;   //dynamic stack using vectors with structure type Node *
std::vector<Node *> arr;


// intialises & returns a node  
Node *create(int data){
      Node *n=new Node();
      n->info=data;
      n->left=n->right=NULL;
    return n;
}


//insertion of node in a binary tree
void insert(int data){
      int loc;        //arr loc of parent of the inserting Node
      Node *n=create(data);
      
      arr.push_back(n);
      if(start==NULL){
          start=n;
          count+=1;
          return;
      }
      count+=1;
      loc=count/2;
      Node *par=arr[loc];
      if(par->left==NULL){
            par->left=n;
      }
      else{
        par->right=n;
      }

    return;
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
              stack.push_back(ptr->right);        //check if right child exists
          }
          else if(ptr->left!=NULL){
            stack.push_back(ptr->left);       //check if left child exists
          }
          else{
            break;
          }
          
      }
return;
}



int main() {
  int num;
  //std::cout<<"enter the data";
  //std::cin>>num;
  insert(4);
  insert(12);
  insert(23);
  insert(17);
  preorder(start);
}