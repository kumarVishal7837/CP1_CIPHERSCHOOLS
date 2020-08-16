#include<bits/stdc++.h>
using namespace std;

void rhombus(int n)
{
	int t=n-1;
	int n1=n;
	int t1=n-1;
	cout<<"Solid Rhombus:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int k=t;k>0;k--)
		{
			cout<<" ";
			
		}
		for(int j=0;j<n;j++)
		{
			cout<<"*";
		}
		t--;
		cout<<endl;
	}
	cout<<"Hollow Rhombus:"<<endl;
	for(int i=0;i<n1;i++)
	{
		for(int k=t1;k>0;k--)
		{
			cout<<" ";
			
		}
		for(int j=0;j<n1;j++)
		{
				if(i==0 || i==n1-1)
				{
					cout<<"*";
				}
				else
				{
					if(j==0 || j==n1-1)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
		}
		t1--;
		cout<<endl;
	}
	
}

int main()
{
	int n;
	cin>>n;
	rhombus(n);
}
