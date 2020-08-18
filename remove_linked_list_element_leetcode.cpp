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


node* RemoveElement(node* head,int val)
{
		if(head==NULL)
		{
			return NULL;
		}
		if(head->next==NULL)
		{
			if(head->data==val)
			{
				return NULL;
			}
			else
			{
				return head;
			}
		}
		node* temp=head;
		node* s=head;
		int c=0;
		while(head)
		{
			c++;
			head=head->next;
		}
		
		while(temp->next)
		{
			while(temp->next && temp->next->data!=val && c>1)
			{
				temp=temp->next;
				c--;
			}
			if(c>1)
			{
				node* n=temp->next;
				temp->next=n->next;
				delete n;
				c--;
			}
			
		}
		temp=s;
		if(temp->data==val)
		{
			node* k=temp;
			temp=temp->next;
			delete k;
		}
		return temp;
		
		
	
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
	int val;
	cin>>val;
	
	node* res=RemoveElement(head,val);
	print(res);
	
	
	
	
	
}
