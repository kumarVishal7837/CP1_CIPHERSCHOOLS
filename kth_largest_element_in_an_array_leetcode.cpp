#include<bits/stdc++.h>
using namespace std;

int kthLargest(int nums[],int k,int n)
{
	priority_queue<int>p;
        for(int i=0;i<n;i++)
        {
            p.push(nums[i]);
        }
        int i=0;
        int res=INT_MIN;
        while(!p.empty() && i<k)
        {
           
            int x=p.top();
            res=x;
            i++;
            
            p.pop();
        }
        return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<kthLargest(arr,k,n);
}
