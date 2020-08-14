#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
        	if(s.count(nums[i]))
        	{
        		return true;
			}
			s.insert(nums[i]);
		}
		return false;
        
}

int main()
{
	int arr[]={1,2,3,4,1};
	vector<int>nums(arr,arr+5);
	cout<<containsDuplicate(nums);
}
