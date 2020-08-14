#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int m=nums[0];
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=m)
            {
                c=c-1;
                if(c==0)
                {
                    m=nums[i];
                    c++;
                }
                
                    
            }
            else
            {
                c++;
            }
        }
        return m;
    }
int main()
{
	int arr[]={2,2,1,1,1,2,2};
	vector<int>nums(arr,arr+7);
	
	cout<<majorityElement(nums)<<endl;
}
