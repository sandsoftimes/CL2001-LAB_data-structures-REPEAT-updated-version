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
    int getLeafCount(Node* node);
    void Merging(BinarySearchTree tree);
};
int main(){
    BinarySearchTree tree;
    BinarySearchTree Stree;
    tree.insert(tree.root,10);
    tree.insert(tree.root,8);
    tree.insert(tree.root,6);
    tree.insert(tree.root,9);
    tree.insert(tree.root,15);
    tree.insert(tree.root,14);
    tree.insert(tree.root,20);
    //Node*Anroot=tree.root->left->left;
    //tree.makeDeletion(tree.root);
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
    cout<<"\n\nThe Tree Leaf Count Is: ";
    cout<<tree.getLeafCount(tree.root)-1<<"\t";
    //tree.mergeTrees(tree.root,Stree.root);
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
	Node*tempNodePtr;	
	if (nodePtr == NULL)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; 
		delete tempNodePtr;
	}
    else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right; 
		delete tempNodePtr;
	}
	else
	{
		tempNodePtr = nodePtr->right;
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}
int BinarySearchTree::getLeafCount(Node* node)
{
	if(node == NULL)	
		return 0;
	if(node->left == NULL && node->right == NULL)
		return 1;		
	else
		return getLeafCount(node->left)+getLeafCount(node->right);
}
void BinarySearchTree::Merging(BinarySearchTree tree){
    tree.inOrderTraversal(tree.root->left);
    insert(root,root->data);
    tree.inOrderTraversal(tree.root->right);
}
