#include<bits/stdc++.h>
using namespace std;

bool check(char ch,stack<char>&c)
{
	if(c.empty())
	{
		return false;
	}
	if(ch==')')
	{
		if(c.top()=='(' )
		{
			return true;
		}
	}
	if(ch==']')
	{
		if(c.top()=='[')
		{
			return true;
		}
	}
	if(ch=='}')
	{
		if(c.top()=='{')
		{
			return true;
		}
	}
	return false;
}

bool isValid(string s) {
        stack<char>c;
        int n=s.size();
        if(n==0)
        {
        	return true;
		}
		if(n==1)
		{
			return false;
		}
		
		if(s[0]==']' || s[0]=='}' || s[0]==')')
		{
			return false;
		}
		
        for(int i=0;i<n;i++)
        {
        	if(s[i]=='[' || s[i]=='{' || s[i]=='(')
			{
				c.push(s[i]);
			
			}
			else
			{
				if(check(s[i],c))
				{
					c.pop();
				}
				else
				{
					return false;
				}
			}
        	
        	
		}
		return c.empty();
}

int main()
{
	string s;
	cin>>s;
	cout<<isValid(s);
}
