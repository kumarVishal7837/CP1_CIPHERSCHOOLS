#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* createBT()
{
	int data;
	cin>>data;
	if(data==-1)
	{
		return NULL;
	}
	node* root=new node(data);
	root->left=createBT();
	root->right=createBT();
	
	return root;
}

void Inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void Invert(node* &root)
{
	if(root==NULL)
	{
		return;
	}
	Invert(root->left);
	Invert(root->right);
	
	node* t=root->left;
	root->left=root->right;
	root->right=t;
}
int main()
{
	node* root=NULL;
	root=createBT();
	Inorder(root);
	Invert(root);
	cout<<endl;
	Inorder(root);
	
}
