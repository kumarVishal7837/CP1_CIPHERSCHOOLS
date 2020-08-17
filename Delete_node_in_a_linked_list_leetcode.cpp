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

void deleteNode(node* &head,int val) {
        if(head==NULL)
        {
        	return;
		}
		node* temp=head;
		while(temp->next->data!=val)
		{
			temp=temp->next;
		}
		node* n=temp->next;
		temp->next=n->next;
		delete n;
		return ;
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	print(head);
	
	int val;
	cin>>val;
	deleteNode(head,val);
	print(head);
	
	
	
}
