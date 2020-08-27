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
	node* root=createBST();
	Preorder(root);
	cout<<endl;
	int p1,q1;
	cin>>p1>>q1;
	node* p=new node(p1);
	node* q=new node(q1);
	
	node* ans=LCA(root,p,q);
	cout<<ans->data<<endl;
}
