#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n];
		int risk=0,ans=0,notrisk;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>=80 || arr[i]<=9)
			{
				risk++;
			}
		}
		notrisk=n-risk;
		while(risk>0)
		{
			risk-=d;
			ans++;
		}
		while(notrisk>0)
		{
			notrisk-=d;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

