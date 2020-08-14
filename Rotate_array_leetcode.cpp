#include<bits/stdc++.h>
using namespace std;

void rotate2(vector<int>& nums,int i,int j)
    {
        while(i<j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        return ;
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rotate2(nums,0,n-1);
        rotate2(nums,0,k-1);
        rotate2(nums,k,n-1);
        return ;
        
    }
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	vector<int>nums(arr,arr+7);
	
	rotate(nums,3);
	for(int i=0;i<nums.size();i++)
	{
		cout<<nums[i]<<" ";
	}
}
