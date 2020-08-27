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
			left=right=NULL;
		}
};

node* InsertElement(node* root,int val)
{
	if(root==NULL)
	{
		root=new node(val);
		return root;
	}
	if(val<=root->data)
	{
		root->left=InsertElement(root->left,val);
	}
	else
	{
		root->right=InsertElement(root->right,val);
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

node* findmin(node* root)
{
	node* temp=root;
	while(temp && temp->left)
	{
		temp=temp->left;
	}
	return temp;
}
node* deleteNode(node* root,int val)
{
	if(root==NULL)
	{
		return root;
	}
	if(val<root->data)
	{
		root->left=deleteNode(root->left,val);
	}
	else if(val>root->data)
	{
		root->right=deleteNode(root->right,val);
	}
	else
	{
		
		if(root->left==NULL)
		{
			node* temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL)
		{
			node* temp=root->left;
			delete root;
			return temp;
			
		}
		else
		{
			node* temp=findmin(root->right);
			root->data=temp->data;
			root->right=deleteNode(root->right,temp->data);
		}
		
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
	cout<<endl;
	int n;
	cin>>n;
	node* temp=deleteNode(root,n);
	Inorder(temp);
	cout<<endl;
}
