#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=arr[i-1][j]+arr[i][j-1];
			}
		}
	}
	cout<<arr[m-1][n-1]<<endl;
}
