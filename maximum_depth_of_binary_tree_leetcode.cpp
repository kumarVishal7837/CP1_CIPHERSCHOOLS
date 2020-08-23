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

int depth(node* root)
{
	if(root==NULL)
	{
		return 0;
		
	}
	int lh=depth(root->left);
	int rh=depth(root->right);
	return max(lh,rh)+1;
}
int main()
{
	node* root=NULL;
	root=createBT();
	Inorder(root);
	cout<<endl<<depth(root)<<endl;
}
