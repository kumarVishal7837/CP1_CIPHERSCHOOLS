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

void PostOrder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}
int s=0;
int Tilt(node* root)
{
	
	
	if(root==NULL)
	{
		return 0;
	}
	int x=Tilt(root->left);
	int y=Tilt(root->right);
	
	s+=abs(x-y);
	return x+y+root->data;
	
	
}
int main()
{
	node* root=NULL;
	root=createBT();
	PostOrder(root);
	Tilt(root);
	cout<<endl<<s<<endl;
}
