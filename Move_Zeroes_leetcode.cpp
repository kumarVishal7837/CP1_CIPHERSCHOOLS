#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        while(r<n)
        {
            if(nums[r]==0)
            {
                r++;
            }
            else
            {
                int temp=nums[r];
                nums[r]=nums[l];
                nums[l]=temp;
                l++;
                r++;
            }
        }
        return ;
        
    }
int main()
{
	int arr[]={0,1,0,3,12};
	vector<int>nums(arr,arr+5);
	moveZeroes(nums);
	for(int i=0;i<5;i++)
	{
		cout<<nums[i]<<" ";
	}
}
