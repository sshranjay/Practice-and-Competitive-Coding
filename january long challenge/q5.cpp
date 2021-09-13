#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int k1=2*k;
		if(sum<k1)
		{
			cout<<-1;
			continue;
		}
		sort(a,a+n,greater<int>());
		if(a[0]<k1)
		for(int i=0;i<n;i++)
		{
			k1-=a[i];
			if(k1<=0)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}

