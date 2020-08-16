#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
	int c=0;
	int num=n;
	int num2=n;
	while(n!=0)
	{
		
		n=n/10;
		c++;
	}
	int sum1=0;
	while(num!=0)
	{
		int x=num%10;
		num=num/10;
		sum1+=pow(x,c);
	}
	if(sum1==num2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cin>>n;
	if(armstrong(n))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
