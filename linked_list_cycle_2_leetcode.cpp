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

void InsertNode(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail= new node(data);
		return;
	}
	node* n=new node(data);
	tail->next=n;
	tail=n;
	return;
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

int Iscycle(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return NULL;
	}
	node* slow=head;
	node* fast=head;
	node* track=head;
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			while(slow!=track)
			{
				slow=slow->next;
				track=track->next;
			}
			int c=0;
			while(head!=track)
			{
				c++;
				head=head->next;
			}
			return c;
		}
	}
	return NULL;
}
int main()
{
	node* head=NULL;
	node* tail=NULL;
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		InsertNode(head,tail,x);
	}
	int pos;
	cin>>pos;
	CreateCycle(head,tail,pos);
	cout<<Iscycle(head)<<endl;
}
	
