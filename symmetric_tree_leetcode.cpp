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
bool Helper(node* root1,node* root2)
{
	if(root1==NULL && root2==NULL)
	{
		return true;
	}
	if(root1==NULL || root2==NULL)
	{
		return false;
	}
	return root1->data==root2->data && Helper(root1->left,root2->right) && Helper(root1->right,root2->left);
}

int main()
{
	node* root=NULL;
	root=createBT();
	
	Inorder(root);
	
	
	cout<<endl<<Helper(root,root)<<endl;

}
