#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],ans[n]={0};
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	ans[0]=1;
	for(int i=0; i<n; i++)
	{
		if(ans[i])
		{
			for(int j=i; j<n,j<=arr[i]+i; j++)
			{
				ans[j]=1;
			}
		}
	}
	if(ans[n-1]==1)
		cout<<"TRUE";
	else
		cout<<"FALSE";
	return 0;
}
