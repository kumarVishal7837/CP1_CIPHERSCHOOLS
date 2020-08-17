#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

node* merge(node* head,node* head2)
{
	if(head==NULL)
	{
		return head2;
	}
	if(head2==NULL)
	{
		return head;
	}
	node* ans;
	if(head->data<head2->data)
	{
		ans=head;
		ans->next=merge(head->next,head2);
	}
	else
	{
		ans=head2;
		ans->next=merge(head,head2->next);
	}
	return ans;
}

void InsertAtEnd(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail=new node(data);
	}
	else
	{
		node* n=new node(data);
		tail->next=n;
		tail=n;
		
		
	}
	return ;
}

void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int main()
{
	node* head=NULL;
	node* tail=NULL;
	
	node* head2=NULL;
	node* tail2=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	for(int i=0;i<n;i++)
	{
		int x1;
		cin>>x1;
		InsertAtEnd(head2,tail2,x1);
	}

	node* res=merge(head,head2);
	print(res);
	
	
	
	
	
}
