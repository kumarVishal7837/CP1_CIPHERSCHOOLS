#include<bits/stdc++.h>
using namespace std;

void pattern(int r,int c)
{
	int n=(r/2)+1;
	int m=r-n;
	
	
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"* ";
			for(int j=0;j<m-1;j++)
			{
				cout<<"  ";
				}
			for(int k=0;k<n;k++)
			{
				cout<<"* ";
				}	
		}
		else if(i==n-1)
		{
			for(int j=0;j<r;j++)
			{
				cout<<"* ";
			}
		}
		else
		{
			cout<<"* ";
			for(int j=0;j<m-1;j++)
			{
				cout<<"  ";
				}
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<m;i++)
	{
		if(i==m-1)
		{
			for(int j=0;j<n;j++)
			{
				cout<<"* ";
			}
			for(int k=0;k<m-1;k++)
			{
				cout<<"  ";
			}
			cout<<"* ";
		}
		else
		{
			for(int i=0;i<m;i++)
			{
				cout<<"  ";
			}
			cout<<"* ";
			for(int k=0;k<m-1;k++)
			{
				cout<<"  ";
			}
			cout<<"* ";
			
		}
		cout<<endl;
	}
}

int main()
{
	int r,c;
	cin>>r>>c;
	pattern(r,c);
}
