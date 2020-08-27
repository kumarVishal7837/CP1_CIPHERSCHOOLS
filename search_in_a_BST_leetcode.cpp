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
node* InsertData(node* root,int data)
{
	if(root==NULL)
	{
		
		root=new node(data);
		return root;
	}
	if(root->data<data)
	{
		root->right=InsertData(root->right,data);
	}
	else
	{
		root->left=InsertData(root->left,data);
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
		root=InsertData(root,data);
		cin>>data;
		
		
	}
	return root;
}

void Preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	Preorder(root->left);
	
	Preorder(root->right);
}
node* searchBST(node* root,int val)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==val)
	{
		return root;
	}
	if(root->data>val)
	{
		return searchBST(root->left,val);
	}
	return searchBST(root->right,val);
}
int main()
{
	node* root=createBST();
	Preorder(root);
	cout<<endl;
	int val;
	cin>>val;
	node* temp=searchBST(root,val);
	Preorder(temp);
}
