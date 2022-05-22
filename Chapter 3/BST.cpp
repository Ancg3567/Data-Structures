#include<iostream>
using namespace std;
class Node{
 public:
  int data;
  Node *l,*r;
 Node(int value){
   data=value; 
   l=NULL;
   r=NULL;
 }
};
  
Node* insertBST(Node *root,int value){
 if(root==NULL){
   return new Node(value);
 }
 else if(value<root->data)
     root->l=insertBST(root->l,value);
 else
   root->r=insertBST(root->r,value);
 return root;
}
Node* searchInBST(Node* root,int value){
 if(root==NULL)
  return NULL;
 if(root->data==value)
   return root;
 else if(root->data>value)
   return searchInBST(root->l,value);
 else
   return searchInBST(root->r,value);
}
void inorder(Node *root){
 if(root==NULL)
  return;
 inorder(root->l);
 cout<<root->data<<" ";
 inorder(root->r);
}
Node* inoderSucc(Node* root){
 Node* curr=root;
 while(curr && curr->l!=NULL){
  curr=curr->l;
 }
 return curr;
}
Node* deleteInBST(Node* root,int key){
 if(key<root->data)
   root->l=deleteInBST(root->l,key);
 else if(key>root->data)
   root->r=deleteInBST(root->r,key);
 else{
  if(root->l==NULL){
   Node* temp=root->r;
 
   return temp;
  }
  else if(root->r==NULL){
   Node* temp=root->l;
   return temp;
  }
   Node* temp=inoderSucc(root->r);
   root->data=temp->data;
   root->r=deleteInBST(root->r,temp->data);
 } 
 return root;
}
int main(){
 Node *root=NULL;
 cout<<"creating BST"<<endl;
 root=insertBST(root,5);
 insertBST(root,1);
 insertBST(root,3);
 insertBST(root,4);
 insertBST(root,7);
 insertBST(root,2);
 inorder(root);
 cout<<endl<<"searching in BST :"<<endl;
 if(searchInBST(root,7)==NULL)
   cout<<"key is not present"<<endl;
 else
   cout<<"key is present"<<endl;
 cout<<"deletingin BST :\n";
  deleteInBST(root,5);
 inorder(root);
	
}
