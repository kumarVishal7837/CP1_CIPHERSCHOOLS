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

vector<int> nextNode(node* head)
{
	
	stack<int>s;
	vector<int>res;
	while(head)
	{
		res.push_back(head->data);
		head=head->next;
		
	}
	int n=res.size();
	
	s.push(0);
	vector<int>ans(n,0);
	for(int j=1;j<n;j++)
	{
		if(res[j]>res[s.top()])
		{
			while(res[j]>res[s.top()])
			{
				ans[s.top()]=res[j];
				s.pop();
				if(s.empty())
				{
					break;
				}
			}
			s.push(j);
		}
		else
		{
			s.push(j);
		}
	}
	
	return ans;
	
}
int  main()
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
	print(head);
	vector<int>v;
	v=nextNode(head);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" "; 
	}
	cout<<endl;
		
}
