#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
	map<char,int>mymap;
	mymap['I']=1;
	mymap['V']=5;
	mymap['X']=10;
	mymap['L']=50;
	mymap['C']=100;
	mymap['D']=500;
	mymap['M']=1000;
	
	int ans=0;
	for(int i=0;i<s.size();i++)
	{
		if(i<s.size()-1 && mymap[s[i+1]]>mymap[s[i]])
		{
			ans-=mymap[s[i]];
		}
		else
		{
			ans+=mymap[s[i]];
		}
	}
	return ans;
	
}

int main()
{
	string s;
	cin>>s;
	cout<<romanToInt(s);
}
