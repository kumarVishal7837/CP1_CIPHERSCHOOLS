#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
	
	vector<int>res;
	int n=A.size();
	for(int i=0;i<n;i++)
	{
		res.push_back(A[i]*A[i]);
	}
	sort(res.begin(),res.end());
	return res;
        
}

int main()
{
	
	int arr[]={-7,-3,2,3,11};
	vector<int>v(arr,arr+5);
	vector<int>v1;
	v1=sortedSquares(v);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
}
