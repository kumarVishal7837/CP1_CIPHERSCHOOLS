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
node* rotateList(node* head,int k)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	
	node* temp=head;
	node* res=head;
	int c=0;
	while(temp->next)
	{
		c++;
		temp=temp->next;
		
	}
	k=k%(c+1);
	if(k==0)
	{
		return head;
	}
	int itr=c-k;
	while(itr>0)
	{
		res=res->next;
		itr--;
	}
	node* n=res->next;
	res->next=NULL;
	temp->next=head;
	head=n;
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
	int k;
	cin>>k;
	print(head);
	node* result=rotateList(head,k);
	print(result);
	
	
	
	
	
}
