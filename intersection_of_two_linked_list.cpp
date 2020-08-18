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

int intersection(node* headA,node* headB)
{
	
	    int ca=0;
        int cb=0;
        node* a=headA;
        while(a!=NULL)
        {
            ca++;
            a=a->next;
        }
        node* b=headB;
        while(b)
        {
            cb++;
            b=b->next;
        }
        if(ca>cb)
        {
            int n=ca-cb;
            node* temp=headA;
            node* temp1=headB;
            while(n--)
            {
                
                temp=temp->next;
            }
            while(temp!=NULL && temp1!=NULL)
            {
                if(temp->data==temp1->data)
                {
                	
                    return temp->data;
                }
                temp1=temp1->next;
                temp=temp->next;
            }
            
            return NULL;
        }
        else
        {
            int m=cb-ca;
            node* temp3=headA;
            node* temp2=headB;
            while(m--)
            {
                temp2=temp2->next;
            }
            while(temp3!=NULL && temp2!=NULL)
            {
                if(temp2->data==temp3->data)
                {
                	
                    return temp2->data;
                }
                temp3=temp3->next;
                temp2=temp2->next;
            }
            
            return NULL;
        }
}

int main()
{
	node* head=NULL;
	node* tail=NULL;
	
	node* head1=NULL;
	node* tail1=NULL;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		InsertAtEnd(head,tail,x);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x1;
		cin>>x1;
		InsertAtEnd(head1,tail1,x1);
	}
	

	cout<<intersection(head,head1)<<endl;
	
	
}
