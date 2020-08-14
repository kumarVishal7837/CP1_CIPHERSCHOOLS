#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
	  int n=prices.size(); 
        int temp=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prices[i-1])
            {
                temp+=prices[i]-prices[i-1];
            }
        }
	    return temp;
	
        
}

int main()
{
	int arr[]={3,3,5,0,0,3,1,4};
	vector<int>p(arr,arr+8);
	cout<<maxProfit(p);
	
}
