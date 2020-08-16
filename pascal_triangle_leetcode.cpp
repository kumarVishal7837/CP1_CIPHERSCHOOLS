#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > generate(int numRows) {
	int n=numRows;
	vector<vector<int> >v;
	    for(int i=0;i<n;i++)
	    {
	    	vector<int>res;
	    	
			int x=1;
			for(int k=0;k<=i;k++)
			{
				res.push_back(x);
				x=((x*(i-k))/(k+1));
			}
			v.push_back(res);
		}
		return v;
        
}

int main()
{
	int n;
	cin>>n;
	vector<vector<int> >v1;
	v1=generate(n);
	for(int i=0;i<v1.size();i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			cout<<v1[i][j];
		}
		cout<<endl;
	}
}

