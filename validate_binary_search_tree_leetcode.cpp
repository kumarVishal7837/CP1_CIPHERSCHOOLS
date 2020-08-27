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

void Inorder(node* root,vector<int>&v)
{
	if(root==NULL)
	{
		return;
	}
	Inorder(root->left,v);
	v.push_back(root->data);
	Inorder(root->right,v);
}
bool validate(vector<int>v)
{
	
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]>=v[i+1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	node* root=createBT();
	vector<int>v;
	Inorder(root,v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<validate(v)<<endl;
}
