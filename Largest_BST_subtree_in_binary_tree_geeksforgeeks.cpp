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

int maxlen(vector<int>v)
{
	if(v.size()==0)
	{
		return 0;
	}
	int l=1;
	int ml=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i-1]<v[i])
		{
			l++;
		}
		else
		{
			l=1;
		}
		ml=max(l,ml);
	}
	return ml;
}

int main()
{
	node* root=createBT();
	vector<int>v;
	vector<int>v1;
	Inorder(root->left,v);
	Inorder(root->right,v1);
	int x=maxlen(v);
	int y=maxlen(v1);
	cout<<endl<<max(x,y)<<endl;
}

