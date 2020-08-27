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

void InorderSuccessor(node* root,vector<int>&v)
{
	if(root==NULL)
	{
		return;
	}
	InorderSuccessor(root->left,v);
	v.push_back(root->data);
	InorderSuccessor(root->right,v);
	
}
int main()
{
	node* root=createBST();
	Preorder(root);
	cout<<endl;
	vector<int>v;
	int x;
	cin>>x;
	InorderSuccessor(root,v);
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==x)
		{
			cout<<v[i+1]<<endl;
			break;
		}
	}
}
