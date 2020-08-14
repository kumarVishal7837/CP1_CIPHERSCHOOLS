#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
vector<string> fizzBuzz(int n) {
	vector<string>s;
	for(int i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			s.push_back("FizzBUzz");
		}
		else if(i%3==0)
		{
			s.push_back("Fizz");
		}
		else if(i%5==0)
		{
			s.push_back("Buzz");
		}
		else
		{
			string s1=to_string(i);
			s.push_back(s1);
		}
	}
	return s;
        
}

int main()
{
	int n=15;
	vector<string>v;
	v=fizzBuzz(n);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
}
