#include<bits/stdc++.h>

using namespace std;
bool isAnagram(string s, string t) {
	int arr[26]={0};
	int n=s.length();
	int m=t.length();
	if(n!=m)
	{
		return false;
	}
	
	for(int i=0;i<s.length();i++)
	{
		int x=s[i]-'a';
		arr[x]++;
		int y=t[i]-'a';
		arr[y]--;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			return false;
			
		}
	}
	return true;
	
        
}
int main()
{
	string s="vishal";
	string t="shalvi";
	cout<<isAnagram(s,t);
}
