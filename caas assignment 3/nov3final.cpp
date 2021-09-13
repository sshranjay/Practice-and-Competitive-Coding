#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,ans=0;
		cin>>n>>k;
		char s[n];
		cin>>s;
		int i=0,c=0,p,j=0;
		while(i<n && j<n)
		{
			if(s[i]=='X')
			{
				j=i+1;i++;c=0;continue;
			}
			if(s[j]=='X')
			{
				i=j+1;j++;c=0;continue;
			}
			if(s[i]=='M')
			{
				if(s[j]=='I')
				{
					for(int x=min(i,j)+1;x<max(i,j);x++)
					{
						if(s[x]==':')
							c++;
					}
					p=k+1-abs(i-j)-c;
					if(p>0)
					{
						ans++;i++;j++;c=0;
					}
					else
					{
						c=0;
						if(i<j)
						{
							i++;
						}
						else
						{
							j++;
						}
					}
				}
				else{
					j++;
				}
			}
			else{
				i++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
