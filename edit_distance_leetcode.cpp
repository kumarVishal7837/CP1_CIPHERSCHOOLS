#include<bits/stdc++.h>
using namespace std;
int distance(string word1,string word2)
{
	int n=word1.length();
        int m=word2.length();
        if(n==0)
        {
            return m;
        }
        if(m==0)
        {
            return n;
        }
        int dp[n+1][m+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j;
                }
                else if(j==0)
                {
                    dp[i][j]=i;
                }
                else if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                   int x=dp[i][j-1];
                    int y=dp[i-1][j];
                    int z=dp[i-1][j-1];
                    dp[i][j]=min(x,min(y,z))+1; 
                }
                
            }
        }
        return dp[n][m];
}
int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;
	cout<<distance(s1,s2);
}
