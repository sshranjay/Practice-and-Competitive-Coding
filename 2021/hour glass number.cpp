#include<bits/stdc++.h>
using namespace std;
int main()
{
	int val=5;
	for(int i=1;i<=val;i++)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(int k=i;k<=5;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<val;i++)
	{
		for(int j=val-i-1;j>0;j--)
		{
			cout<<" ";
		}
		for(int k=val-i;k<=val;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
