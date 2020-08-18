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

void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

bool isPalindrome(node* head)
{
	if(head==NULL)
	{
		return true;
	}
	if(head->next==NULL)
	{
		return true;
	}
	if(head->next->next==NULL)
	{
		if(head->data==head->next->data)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int c=0;
	node* n=head;
	while(n)
	{
		c++;
		n=n->next;
	}
	node* s=head;
	node* f=head;
	node* p=NULL;
	if(c%2==0)
	{
		while(f->next->next!=NULL)
		{
			s=s->next;
			f=f->next->next;
		}
		p=s;
		s=s->next;
		f=f->next;
	
	}
	else
	{
		while(f->next!=NULL)
		{
			s=s->next;
			f=f->next->next;
		}
		p=s;
		s=s->next;
	}
	
	node* c1=s;
	while(c1)
	{
		node* n1=c1->next;
		c1->next=p;
		p=c1;
		c1=n1;
	}
	while(head!=f)
	{
		if(head->data!=f->data)
		{
			return false;
		}
		head=head->next;
		if(head==f)
		{
			return true;
		}
		f=f->next;
		
	}
	return true;
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
	cout<<isPalindrome(head)<<endl;
	
}
