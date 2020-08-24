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

int Helper(node* root,int val,int &parent,int h)
{
	
	if(root==NULL)
	{
		return 0;
	}
	if(root->data==val)
	{
		return h;
	}
	parent=root->data;
	int l=Helper(root->left,val,parent,h+1);
	if(l)
	{
		return l;
	}
	parent=root->data;
	int r=Helper(root->right,val,parent,h+1);
	return r;
	
}
bool isCousins(node* root,int x,int y)
{
	if(root->data==x || root->data==y)
	{
		return false;
	}
	int p1=-1;
	int p2=-1;
	int hx=Helper(root,x,p1,0);
	int hy=Helper(root,y,p2,0);
	if(p1!=p2 && hx==hy)
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
	cout<<endl;
	int x,y;
	cin>>x>>y;
	cout<<isCousins(root,x,y)<<endl;
	
}
