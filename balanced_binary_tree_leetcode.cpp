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
		return ;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);

	
}
int Helper(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int lh=Helper(root->left);
	int rh=Helper(root->right);
	return max(lh,rh)+1;
	
}
bool isBalance(node* root)
{
	if(root==NULL)
	{
		return true;
	}
	int lh=Helper(root->left);
	int rh=Helper(root->right);
	if(abs(lh-rh)>1)
	{
		return false;
	}
	if(isBalance(root->left) && isBalance(root->right))
	{
		return true;
	}
	return false;
}

int main()
{
	node* root=NULL;
	root=createBT();
	Inorder(root);
	cout<<endl<<isBalance(root)<<endl;
	
}
