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
pair<int,int> Helper(node* root)
{
	if(root==NULL)
	{
		return make_pair(0,0);
	}
	pair<int,int> l=Helper(root->left);
	pair<int,int> r=Helper(root->right);
	int inter=max(l.second,r.second);
	if(l.first+r.first+1>inter)
	{
		inter=l.first+r.first+1;
	}
	return make_pair(max(l.first,r.first)+1,inter);
}
int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	pair<int,int> ans=Helper(root);
	return max(ans.first,ans.second)-1;
}

int main()
{
	node* root=NULL;
	root=createBT();
	Inorder(root);
	cout<<endl<<diameter(root)<<endl;
}
