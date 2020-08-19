#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	
	map<int,int>mymap;
	int n=nums1.size();
	int m=nums2.size();
	vector<int>v;
	for(int i=0;i<m;i++)
	{
		int x=nums2[i];
		int x2=0;
		for(int j=i+1;j<m;j++)
		{
			if(nums2[j]>x)
			{
				x=nums2[j];
				x2=1;
				break;
			}
		}
		if(x2==0)
		{
			mymap[nums2[i]]=-1;
		}
		else
		{
			mymap[nums2[i]]=x;
		}
		
		
	}
	for(int i=0;i<n;i++)
	{
		int a=mymap[nums1[i]];
		v.push_back(a);
	}
	return v;
	
        
}

int main()
{
	int arr1[]={2,4};
	int arr2[]={1,2,3,4};
	vector<int>v1(arr1,arr1+2);
	vector<int>v2(arr2,arr2+4);
	vector<int>v3;
	v3=nextGreaterElement(v1,v2);
	
	for(int i=0;i<v3.size();i++)
	{
		cout<<v3[i]<<" ";
	}
	
}
