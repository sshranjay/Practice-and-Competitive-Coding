#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ar1[n],ar2[m];
	for(int i=0; i<n; i++)
	{
		cin>>ar1[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>ar2[i];
	}
	if(ar1==NULL || !(ar1))
	{
		cout<<"NULL";
	}
	if(ar2==NULL || !(ar2))
	{
		for(int i=0; i<n; i++)
		{
			cout<<ar1[i];
		}
	}
	sort(ar2, ar2+m, greater<int>());
	int j=0;
	for(int i=0; i<n,j<m; i++)
	{
		if(ar1[i]<ar2[j])
		{
			ar1[i]=ar2[j];
			j++;
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<ar1[i]<<" ";
	}
	return 0;
}
