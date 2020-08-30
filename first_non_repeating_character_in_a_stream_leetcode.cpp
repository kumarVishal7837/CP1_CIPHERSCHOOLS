#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n];
	cin>>s;
	queue<char>q;
	int x[26]={0};
	for(int i=0;i<n;i++)
	{
		q.push(s[i]);
		x[s[i]-'a']++;
		while(!q.empty())
		{
			if(x[q.front()-'a']>1)
			{
				q.pop();
			}
			else
			{
				cout<<q.front()<<" ";
				break;
			}
		}
		if(q.empty())
		{
			cout<<-1<<" ";
		}
	}
	cout<<endl;
}
