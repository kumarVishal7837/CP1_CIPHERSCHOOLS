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

int k=0;
node* PreIn(int inorder[],int preorder[],int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	int val=preorder[k++];
	node* res=new node(val);
	int j=-1;
	for(int i=s;i<=e;i++)
	{
		if(inorder[i]==val)
		{
			j=i;
			break;
		}
	}
	res->left=PreIn(inorder,preorder,s,j-1);
	res->right=PreIn(inorder,preorder,j+1,e);
	return res;
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
int main()
{
	int n;
	cin>>n;
	int inorder[n];
	for(int i=0;i<n;i++)
	{
		cin>>inorder[i];
	}
	int preorder[n];
	for(int i=0;i<n;i++)
	{
		cin>>preorder[i];
	}
	node* temp=PreIn(inorder,preorder,0,n-1);
	Inorder(temp);
}
