#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	int t=target;
        set<int>s;
        vector<int>v;
        int i=0;
        int k=0;
        s.insert(nums[0]);
        for(i=1;i<nums.size();i++)
        {
            
            if(s.count(t-nums[i]))
            {
                v.push_back(i);
                k=t-nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        for(int j=0;j<=i;j++)
        {
            if(nums[j]==k)
            {
                v.push_back(j);
                break;
            }
        }
        int temp=v[0];
        v[0]=v[1];
        v[1]=temp;
        return v;
        
}

int main()
{
	int arr[]={2, 7, 11, 15};
	vector<int>v1(arr,arr+4);
	vector<int>num;
	num=twoSum(v1,9);
	for(int i=0;i<num.size();i++)
	{
		cout<<num[i]<<" ";
	}
}
