#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
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
int s=0;
stack<int>res;
bool Pathsum(node* root,int sum1)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->left==NULL && root->right==NULL)
	{
		if(root->data==sum1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	if(Pathsum(root->left,sum1-root->data))
	{
		return true;
	}
	if(Pathsum(root->right,sum1-root->data))
	{
		return true;
	}
	return false;
}
int main()
{
	node* root=NULL;
	root=createBT();
	cout<<Pathsum(root,22)<<endl;
	
}
