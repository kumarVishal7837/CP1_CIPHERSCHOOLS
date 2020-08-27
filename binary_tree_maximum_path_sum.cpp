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
int Helper(node* root,int &ans)
{
	if(root==NULL)
	{
		return 0;
	}
	int l=Helper(root->left,ans);
	int r=Helper(root->right,ans);
	int temp=max(max(l,r)+root->data,root->data);
	int temp2=max(l+r+root->data,temp);
	ans=max(temp2,ans);
	return temp;
}
int maximumPathSum(node* root)
{
	int ans=INT_MIN;
	int res=Helper(root,ans);
	return ans;
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
	node* root=createBT();
	Inorder(root);
	cout<<endl;
	cout<<maximumPathSum(root);
}
