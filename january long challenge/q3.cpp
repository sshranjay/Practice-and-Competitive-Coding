#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int suma=0,sumb=0,count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			suma+=a[i];
			
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			sumb+=b[i];
		}
		sort(a,a+n);
		sort(b,b+m,greater<int>());
		if(suma>sumb)
		{
			cout<<0<<endl;
			continue;
		}
		int i=0;
		if(a[i]>=b[i])
		{
			cout<<-1<<endl;
			continue;
		}
		while(suma<=sumb && (i<(min(n,m))))
		{
			if(a[i]>=b[i])
			{
				cout<<-1<<endl;
				goto end;
			}
			suma=suma-a[i]+b[i];
			sumb=sumb-b[i]+a[i];
			count++;
			i++;
		}
		if(suma<sumb)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<count<<endl;
		end:;
	}
	return 0;
}

