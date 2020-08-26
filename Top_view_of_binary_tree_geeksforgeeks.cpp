#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		int h;
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


void Helper(node* root,map<int,int>&mymap)
{
	if(root==NULL)
	{
		return;
	}
	queue<node*>q;
	int height=0;
	q.push(root);
	root->h=height;
	while(!q.empty())
	{
		height=root->h;
		if(mymap.count(height)==0)
		{
			mymap[height]=root->data;
		}
		if(root->left)
		{
			root->left->h=height-1;
			q.push(root->left);
		}
		if(root->right)
		{
			root->right->h=height+1;
			q.push(root->right);
		}
		q.pop();
		root=q.front();
		
	}
}
void TopView(node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	map<int,int>mymap;
	Helper(root,mymap);
	map<int,int>::iterator itr;
	for(itr=mymap.begin();itr!=mymap.end();itr++)
	{
		cout<<itr->second<<" ";
	}
	
	
	
}


int main()
{
	node* root=NULL;
	root=createBT();
	
	TopView(root);
	cout<<endl;
	;
}
