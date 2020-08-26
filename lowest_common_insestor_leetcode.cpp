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

bool Helper(node* root,node* p,vector<int>&v)
{
	if(root==NULL)
	{
		return false;
	}
	v.push_back(root->data);
	if(root->data==p->data)
	{
		return true;
	}
	
	if(Helper(root->left,p,v) || Helper(root->right,p,v))
	{
		return true;
	}
	v.pop_back();
	return false;
	
	
	
}
node* LCA(node* root,node* p,node* q)
{
	vector<int>v;
	vector<int>v1;
	Helper(root,p,v);
	Helper(root,q,v1);
	for(int i=0;i<v.size() && i<v1.size();i++)
	{
		if(v[i]!=v1[i])
		{
			node* res=new node(v[i-1]);
			return res;
		}
	}
	if(v.size()<=v1.size())
	{
		return p;
	}
	else
	{
		return q;
	}
	

}
int main()
{
	node* root=createBT();
	
	Inorder(root);
	cout<<endl;
	int p1,q1;
	cin>>p1>>q1;
	node* p=new node(p1);
	node* q=new node(q1);
	node* ans=LCA(root,p,q);
	cout<<endl<<ans->data<<endl;
	
}
