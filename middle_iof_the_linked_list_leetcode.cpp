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

int middle(node* head)
{
	node* count=head;
	int c=0;
	while(count)
	{
		c++;
		count=count->next;
	}
	node* s=head;
	node* f=head;
	if(c%2==0)
	{
		while(f->next->next!=NULL)
		{
			s=s->next;
			f=f->next->next;
		}
		return s->next->data;
	}
	else
	{
		while(f->next!=NULL)
		{
			s=s->next;
			f=f->next->next;
		}
		return s->data;
	}
	
}
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	
	cout<<middle(head)<<endl;
}
