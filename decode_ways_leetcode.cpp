#include<bits/stdc++.h>
using namespace std;
int decode(string s)
{
	int n=s.length();
        if(s[0]=='0')
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int c1=1;
        int c2=1;
        
        
        for(int i=1;i<n;++i)
        {
            int x=s[i]-'0';
            
            int z=(s[i-1]-'0')*10 + x;
            int c=0;
            if(x>0)
            {
                c+=c2;
            }
            if(z<=26 && z>=10)
            {
            
                c+=c1;
            }
            c1=c2;
            c2=c;
            
        }
        
        return c2;
}
int main()
{
	string s;
	cin>>s;
	cout<<decode(s);
	
}

