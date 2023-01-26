#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
class BinarySearchTree{
    public:
    Node*root;
    BinarySearchTree(){
        root=NULL;
    }
    Node*insert(Node*root,int val);
    void remove(Node*root,int val);
    void inOrderTraversal(Node*root);
    void preOrderTraversal(Node*root);
    void postOrderTraversal(Node*root);
    void makeDeletion(Node*&nodePtr);
    int findMax(Node* root);
    int minValue(Node* node);
    int getLeafCount(Node* node);
    Node*mergeTrees(Node*n1, Node*n2);
};
int main(){
    BinarySearchTree tree;
    BinarySearchTree Stree;
    tree.insert(tree.root,8);
    tree.insert(tree.root,9);
    tree.insert(tree.root,12);
    tree.insert(tree.root,15);
    //tree.makeDeletion(tree.root);
    cout<<"\n In-Order"<<endl;
    cout<<"Left---Root---Right"<<endl;
    tree.inOrderTraversal(tree.root);

    cout<<"\n Pre-Order"<<endl;
    cout<<"Root---Left---Right"<<endl;
    tree.preOrderTraversal(tree.root);
    
    cout<<"\n Post-Order"<<endl;
    cout<<"Left---Right---Root"<<endl;
    tree.postOrderTraversal(tree.root);
    cout<<"\n\nMaximum Function is Called As: ";
    cout<<tree.findMax(tree.root)<<"\t";
    cout<<"\n\nMinimum Function is Called As: ";
    cout<<tree.minValue(tree.root)<<"\t";
    cout<<"\n\nThe Tree Leaf Count Is: ";
    cout<<tree.getLeafCount(tree.root)<<"\t";
    tree.mergeTrees(tree.root,Stree.root);
    return 0;
}
Node*BinarySearchTree::insert(Node*r,int val){
    if(r==NULL){
        Node*t=new Node(val);
        if(r==root){
            root=r=t;
        }
        else{
        r=t;}
        return r;
    }
    else if(val==r->data){
        cout<<"Duplicate Data: "<<val<<endl;
    }
    else if(val<r->data){
        r->left=insert(r->left,val);
    }
    else if(val>r->data){
        r->right=insert(r->right,val);
    }
    return r;
}
void BinarySearchTree::inOrderTraversal(Node*r){
    if(r==NULL){
        return;
    }
    inOrderTraversal(r->left);
    cout<<" "<<r->data<<" ->";
    inOrderTraversal(r->right);
}
void BinarySearchTree::preOrderTraversal(Node*r){
    if(r==NULL){
        return;
    }
    cout<<" "<<r->data<<" ->";
    inOrderTraversal(r->left);
    inOrderTraversal(r->right);
}
void BinarySearchTree::postOrderTraversal(Node*r){
    if(r==NULL){
        return;
    }
    inOrderTraversal(r->left);
    inOrderTraversal(r->right);
    cout<<" "<<r->data<<" ->";
}
void BinarySearchTree::makeDeletion(Node*&nodePtr)
{
	Node*tempNodePtr;	// Temporary pointer, used in
	                      // reattaching the left subtree.

	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; // Reattach the left child
		delete tempNodePtr;
	}
    else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; // Reattach the right child
		delete tempNodePtr;
	}
	// If the node has two children.
	else
	{
		// Move one node the right.
		tempNodePtr = nodePtr->right;
		// Go to the end left node.
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		// Reattach the left subtree.
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		// Reattach the right subtree.
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}
int BinarySearchTree::findMax(Node* root)
{
	// Base case
	if (root == NULL)
		return INT_MIN;

	// Return maximum of 3 values:
	// 1) Root's data 2) Max in Left Subtree
	// 3) Max in right subtree
	int res = root->data;
	int lres = findMax(root->left);
	int rres = findMax(root->right);
	if (lres > res)
		res = lres;
	if (rres > res)
		res = rres;
	return res;
}
int BinarySearchTree::minValue(Node* node)
{
Node* current = node;
 
/* loop down to find the leftmost leaf */
while (current->left != NULL)
{
    current = current->left;
}
return(current->data);
}
int BinarySearchTree::getLeafCount(Node* node)
{
	if(node == NULL)	
		return 0;
	if(node->left == NULL && node->right == NULL)
		return 1;		
	else
		return getLeafCount(node->left)+
			getLeafCount(node->right);
}
Node* mergeTrees(Node* n1, Node* n2){
      if(!n1 && n2){
         return n2;
      }
      else if(!n2 && n1)return n1;
      else if(!n1 && !n2)return NULL;
      n1->data+=n2->data;
      n1->left = mergeTrees(n1->left,n2->left);
      n1->right = mergeTrees(n1->right,n2->right);
      return n1;
   }