#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>ans;
        int i=0;
        int j=n;
        int s=nums.size();
        while(j<s)
        {
        	ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        	j++;
        	i++;
		}
		return ans;
        
}

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int k;
	cin>>k;
	
	vector<int>v1;
	v1=shuffle(v,k);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}
