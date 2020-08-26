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
void InorderIterative(node* root)
{
	stack<node*>s;
	node* t=root;
	while(!s.empty() || t!=NULL)
	{
		if(t!=NULL)
		{
			s.push(t);
			t=t->left;
		}
		else
		{
			t=s.top();
			s.pop();
			cout<<t->data<<" ";
			t=t->right;
		}
	}
}

int main()
{
	node* root=createBT();
	InorderIterative(root);
}
