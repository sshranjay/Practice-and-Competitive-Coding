#include <iostream>
using namespace std;

int main() {
	
	// your code goes here
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int n;
		cin>>n;
		long long int b[n+1],a[n+1];		
		for(long long int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		long long int p=1;
		
	    for(long long int j=n;j>=1;j--)
	    {
	    	if(b[j]!=j)
	    	{
	    		a[j]=a[b[j]];
			}
			else
			{
				a[j]=p;
				p++;
			}
		}
		for(int k=1;k<=n;k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


