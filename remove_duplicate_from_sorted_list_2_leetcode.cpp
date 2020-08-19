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

node* removeDuplicate(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node* temp=head;
	node* res=head;
	int flag=0;
	if(head->data==head->next->data)
	{
		flag=1;
	}
	while(temp && temp->next)
	{
		int f=0;
		while(temp->data==temp->next->data)
		{
			node* n=temp->next;
			temp->next=n->next;
			delete n;
			f=1;
			if(temp->next==NULL)
			{
				break;
			}
		}
		if(f==1)
		{
			node* m=temp;
			temp=temp->next;
			res->next=temp;
			
		}
		else
		{
			res=temp;
			temp=temp->next;
		}
		
	}
	if(flag==1)
	{
		node* t=head;
		head=head->next;
		delete t;
	}
	return head;
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
		InsertNode(head,tail,x);
	}
	
	node* result=removeDuplicate(head);
	print(result);
	
	
	
	
	
	
}
