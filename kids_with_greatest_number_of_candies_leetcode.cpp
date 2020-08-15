#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	int n=candies.size();
	int m=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(candies[i]>m)
		{
			m=candies[i];
		}
	}
	vector<bool>res;
	for(int i=0;i<n;i++)
	{
		if(candies[i]+extraCandies>=m)
		{
			res.push_back(true);
		}
		else
		{
			res.push_back(false);
		}
	}
       
	  return res; 
}

int main()
{
	int arr[]={2,3,5,1,3};
	vector<int>v(arr,arr+5);
	vector<bool>v1;
	v1=kidsWithCandies(v,3);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}
