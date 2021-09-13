#include<bits/stdc++.h>
using namespace std;
int main()
{
	int val=3;
	for(int i=1;i<=val;i++)
	{
		for(int j=1;j<=val-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i*2-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<val;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*(val-i)-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
