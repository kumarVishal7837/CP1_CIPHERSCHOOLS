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

void InsertNode(node* &result,int val)
    {
        if(result==NULL)
        {
            result=new node(val);
            return;
        }
        node* n=new node(val);
        node* temp=result;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=n;
        return;
    }
node* oddeven(node* head)
{
		if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        node* f=head;
        node* s=head->next;
        node* result=NULL;
        InsertNode(result,f->data);
        while(f->next && f->next->next)
        {
            
            f=f->next->next;
            InsertNode(result,f->data);
        }
        InsertNode(result,s->data);
        while(s->next && s->next->next)
        {
            
            s=s->next->next;
            InsertNode(result,s->data);
        }
        return result;
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
	node* res=oddeven(head);
	print(res);
	
	

	
	
	
}
