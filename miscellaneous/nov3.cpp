#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,ans,ans1,count=0;
		cin>>n>>k;
		char s[n];
		cin>>s;
		
		for(int i=0;i<=n;i++)
		{
			int p=0,ss=0;
			if(s[i]=='M')
			{
				//printf("ok");
				for(int j=0;j<=n;j++)
				{
					if(s[j]=='X')
						break;
					else if(s[j]==':')
					{
						ss++;
					}
					else if(s[j]=='_' || 'M')
					{
						continue;
					}
					else if(s[j]=='I')
					{
						int temp=k+1-(abs(j-i))-ss;
						if(temp>p && temp>0)
						{
							p=temp;
							ans=j;ans1=i;
						}
					}
				}
			}
				if(p==0)
				{
					continue;
				}
				else{
					count++;
					s[ans]='_';s[ans1]='_';
				}
		}
		cout<<count<<endl;
	}
	return 0;
}

