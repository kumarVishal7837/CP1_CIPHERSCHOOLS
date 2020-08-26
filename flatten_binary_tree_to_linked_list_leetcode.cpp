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
void Flatten(node* &root)
{
	if(root==NULL || root->left==NULL && root->right==NULL)
	{
		return;
	}
	if(root->left)
	{
		Flatten(root->left);
		node* temp=root->right;
		root->right=root->left;
		root->left=NULL;
		node* temp2=root->right;
		while(temp2->right!=NULL)
		{
			temp2=temp2->right;
		}
		temp2->right=temp;
	}
	Flatten(root->right);
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

int main()
{
	node* root=createBT();
	Inorder(root);
	cout<<endl;
	Flatten(root);
	Inorder(root);
	cout<<endl;
	
}
