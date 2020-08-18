#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void InsertAtEnd(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail=new node(data);
		return;
	}
	node* n=new node(data);
	tail->next=n;
	tail=n;
	return;
}

void CreateCycle(node* &head,node* &tail,int pos)
{
	if(pos==-1)
	{
		return;
	}
	
	int c=0;
	node* temp=head;
	while(c<pos)
	{
		temp=temp->next;
		c++;
	}
	tail->next=temp;
	return;
}

bool Iscycle(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return false;
	}
	node* slow=head;
	node* fast=head;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	node* head=NULL;
	node* tail=NULL;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	int pos;
	cin>>pos;
	CreateCycle(head,tail,pos);
	cout<<Iscycle(head)<<endl;
	
	
	
	
	
}
