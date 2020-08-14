#include<bits/stdc++.h>
using namespace std;

int numSquares(int n) {
	int num=n;
	int x=sqrt(num);
	int c=0;
	int arr[n+1];
	for(int i=0;i<=n;i++)
	{
		arr[i]=i;
		for(int j=1;j*j<=i;j++)
		{
			arr[i]=min(arr[i],1+arr[i-(j*j)]);
			
		}
		
	}
	return arr[n];
	
        
}
    
    
int main()
{
	cout<<numSquares(13);
}
