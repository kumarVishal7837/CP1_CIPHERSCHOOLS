#include<bits/stdc++.h>
using namespace std;

int tribonacci(int n)
{
		vector<int>v{0,1,1,0};
        for(int i=3;i<=n;i++)
        {
            v[i%4]=v[(i-1)%4]+v[(i-2)%4]+v[(i-3)%4];
        }
        return v[n%4];
}

int main()
{
	int n;
	cin>>n;
	cout<<tribonacci(n)<<endl;
}
