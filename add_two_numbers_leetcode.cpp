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
void InsertValue(node* &temp,int value)
{
	if(temp==NULL)
	{
		temp=new node(value);
		return;
	}
	node* y=new node(value);
	node* t=temp;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=y;
	return;
}
node* addList(node* head1,node* head2)
{
	node* temp=NULL;
	
	node* len=head1;
	int c1=0;
	while(len)
	{
		c1++;
		len=len->next;
	}
	int c2=0;
	node* len2=head2;
	while(len2)
	{
		c2++;
		len2=len2->next;
	}
	int c=0;
	if(c1<=c2)
	{
		while(head1)
		{
			int x=head1->data+head2->data+c;
			
			c=x/10;
			int value=x%10;
			InsertValue(temp,value);
			head1=head1->next;
			head2=head2->next;
		}
		if(head2!=NULL)
		{
			while(head2)
			{
				int v=head2->data+c;
				c=v/10;
				InsertValue(temp,v%10);
				head2=head2->next;
			}
		}
	}
	else
	{
		while(head2)
		{
			int x=head1->data+head2->data+c;
			c=x/10;
			int value=x%10;
			cout<<value<<endl;
			InsertValue(temp,value);
			head1=head1->next;
			head2=head2->next;
		}
		if(head1!=NULL)
		{
			while(head1)
			{
				int v=head1->data+c;
				c=v/10;
				InsertValue(temp,v%10);
				head1=head1->next;
			}
		}
	}
	if(c!=0)
	{
		InsertValue(temp,c);
	}
	
	return temp;
	
}
int main()
{
	int n;
	cin>>n;
	node* head=NULL;
	node* tail=NULL;
	int m;
	cin>>m;
	node* head1=NULL;
	node* tail1=NULL;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertNode(head,tail,x);
	}
	
	for(int i=0;i<m;i++)
	{
		int x1;
		cin>>x1;
		InsertNode(head1,tail1,x1);
	}
	
	node* result=addList(head,head1);
	print(result);
	
	
	
	
	
	
}
