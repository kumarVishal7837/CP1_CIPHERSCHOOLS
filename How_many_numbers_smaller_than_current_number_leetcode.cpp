#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	int n=nums.size();
	vector<int>res;
	
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(nums[i]!=nums[j] && nums[j]<nums[i])
			{
				c++;
				
			}
			
			
		}
		
		res.push_back(c);
	
		
	}
	
	return res;
        
        
}

int main()
{
	int arr[]={8,1,2,2,3};
	vector<int>v(arr,arr+5);
	vector<int>v1;
	v1=smallerNumbersThanCurrent(v);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	
	
}
