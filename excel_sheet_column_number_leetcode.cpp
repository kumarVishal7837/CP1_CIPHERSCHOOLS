#include<bits/stdc++.h>
using namespace std;
int titleToNumber(string s) {
	int n=s.length();
	int temp=0;
	int v=0;
	for(int i=n-1;i>=0;i--)
	{
		int x=s[i]-'A'+1;
		temp+=pow(26,v)*x;
		v++;
	}
	return temp;
        
}

int main()
{
	string s="ZY";
	 cout<<titleToNumber(s);
	 
	
}
