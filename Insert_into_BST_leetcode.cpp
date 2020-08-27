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
node* InsertElement(node* root,int val)
{
	if(root==NULL)
	{
		root=new node(val);
		return root;
	}
	if(root->data<val)
	{
		root->right=InsertElement(root->right,val);
	}
	else
	{
		root->left=InsertElement(root->left,val);
	}
	return root;
	
}
node* createBST()
{
	node* root=NULL;
	int data;
	cin>>data;
	while(data!=-1)
	{
		root=InsertElement(root,data);
		cin>>data;
	}
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
int main()
{
	node* root=createBST();
	Inorder(root);
}
