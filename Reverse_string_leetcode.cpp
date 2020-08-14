#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
	
	int n=s.size();
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i]<<" ";
	}
	
	return;
        
    }

int main()
{
	string s1="hello";
	
	vector<char>s(s1.begin(),s1.end());
	
	reverseString(s);
	
	
}
