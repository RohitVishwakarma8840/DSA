#include<iostream>
#include<queue>
using namespace std; 

class Node{
    public:
    int data; 
    Node *left , *right;

    Node(int value){
     data = value;
     left = right = NULL;


    }

};


Node *BinaryTree(){
 int x; 
 cin>>x;

 if(x==-1)
 return NULL;

 Node *temp = new Node(x);
 // Left side Create 
 cout<<" Enter the left child of "<< x<< " " ;
 temp->left = BinaryTree();

 // Right Side Create 
  cout<<" Enter the right  child of "<< x<<" " ;
 temp->right = BinaryTree();

  return temp;

}

 int main(){

 cout<<" Enter the root Node : ";
 Node *root;
 root = BinaryTree();


    return 0;
 }
