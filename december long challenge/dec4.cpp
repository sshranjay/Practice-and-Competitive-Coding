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
		int k1=k;
		int arr[n+1];
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";	
			}
			continue;	
		}	
		for(int i=1;i<=n;i++)
		{
			if(k1==0)
			{
				for(int j=i;j<=n;j++)
				{
					cout<<-j<<" ";
				}
				break;
			}
			if(k1<=n-i)
			{
				if(i%2!=0)
					{
						cout<<-i<<" ";
					}
				else 
					{
						cout<<i<<" ";k1--;	
					}
			}	
			else
			{
				for(int j=i;j<=n;j++)
				{
					cout<<j<<" ";
				}
				break;
			}				
		}
	}
	return 0;
}

