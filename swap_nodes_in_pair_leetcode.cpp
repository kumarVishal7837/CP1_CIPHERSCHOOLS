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

node* swapNodes(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node* temp=head;
	node* p=temp->next;
	while(true)
	{
		
		node* res=temp->next;
		node* ans=res->next;
		res->next=temp;
		if(ans==NULL || ans->next==NULL)
		{
			temp->next=ans;
			break;
		}
		temp->next=ans->next;
		temp=ans;
		
		
	}
	return p;
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
	
	node* result=swapNodes(head);
	print(result);
}
