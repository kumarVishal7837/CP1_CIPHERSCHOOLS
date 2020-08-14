#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
	int n=nums.size();
	int a=nums[0];
	for(int i=1;i<n;i++)
	{
		a=a^nums[i];
	}
	return a;
	        
}

int main()
{
	int arr[]={4,1,2,1,2};
	
	vector<int>nums(arr,arr+5);
	cout<<singleNumber(nums);
}
