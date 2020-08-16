#include<bits/stdc++.h>
using namespace std;
void b2d(int n)
{
	int s=0;
	int i=0;
	while(n!=0)
	{
		int x=n%10;
		s+=pow(2,i)*x;
		i++;
		n=n/10;
		
	}
	cout<<s<<endl;
}

int main()
{
	int n;
	cin>>n;
	b2d(n);
}
