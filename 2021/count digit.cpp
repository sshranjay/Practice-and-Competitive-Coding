#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int j=1; j<=n; j++)
	{
		int i=j;
		while(i)
		{
			if(i%10==1)
			{
				ans++;
			}
			i/=10;
		}
	}
	cout<<ans;

	return 0;
}
