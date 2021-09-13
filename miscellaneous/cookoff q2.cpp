#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	int ans[t];
//	vector<string> ans;
	for(int x=0;x<t;x++)
	{
		int l,r;
		cin>>l>>r;
		for(int n=l;n<=r;n++)
		{
			int l1=l;
			while(l1<r)
			{		
				if(n%l1>n%l1+1)
				{
					l1++;
				}
				else
				{
					ans[x]=-1;goto end;
					//cout<<"-1"<<endl;goto end;
				}
			}
			if(ans[x]!=-1)
				ans[x]=n;
			//cout<<n<<endl;
			end:;
		}
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;	
	}
return 0;	
}
