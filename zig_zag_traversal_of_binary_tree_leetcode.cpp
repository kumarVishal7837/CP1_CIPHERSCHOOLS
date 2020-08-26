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

void zigzag(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	vector<int>v;
	int x=1;
	while(!q.empty())
	{
		node* t=q.front();
		if(t)
		{
			v.push_back(t->data);
		}
		else
		{
			break;
		}
		q.pop();
		if(t->left)
		{
			q.push(t->left);
		}
		if(t->right)
		{
			q.push(t->right);
		}
		if(q.front()==NULL)
		{
			q.pop();
			
			if(x%2==0)
			{
				reverse(v.begin(),v.end());
				
			}
			x++;
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			v.clear();
			q.push(NULL);
			
		}
	}
}
int main()
{
	node* root=createBT();
	Inorder(root);
	cout<<endl;
	zigzag(root);
}
