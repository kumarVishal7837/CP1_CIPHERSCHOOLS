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
}*head;

void reverseRecursive(node* curr,node* p)
{
	if(curr==NULL)
	{
		return;
	}
	if(curr->next==NULL)
	{
		head=curr;
		curr->next=p;
		return;
	}
	reverseRecursive(curr->next,curr);
	curr->next=p;
}

void reverseIterative(node* &head,node* &tail)
{
	 node* p=NULL;
	 node* c=head;
	 
	 while(c)
	 {
	 	node* n=c->next;
	 	c->next=p;
	 	p=c;
	 	c=n;
	 	
	 }
	 tail=head;
	 head=p;
	 return;
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
	head=NULL;
	node* tail=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	
	reverseIterative(head,tail);
	print(head);
	reverseRecursive(head,NULL);
	print(head);
	
	
	
	
	
}
