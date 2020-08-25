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

void LevelOrder(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		vector<int>v;
		node* t=q.front();
		if(t==NULL)
		{
			break;
		}
		v.push_back(t->data);
		q.pop();
		
		
		
		if(t->left!=NULL)
		{
			q.push(t->left);
		}
		if(t->right!=NULL)
		{
			q.push(t->right);
		}
		if(q.front()==NULL)
		{
			q.pop();
			q.push(NULL);
			cout<<v[0]<<" ";
			v.clear();
			
		}
		
	}
}
void rightView(node* root,vector<int>&v)
{
	if(root==NULL)
	{
		return ;
	}
	v.push_back(root->data);
	rightView(root->right,v);
}
int main()
{
	node* root=NULL;
	root=createBT();
	Inorder(root);
	cout<<endl;
//	vector<int>v;
//	rightView(root,v);
//	cout<<endl;
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
	LevelOrder(root);
}
