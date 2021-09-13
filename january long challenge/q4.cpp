#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		k=k%4;
		if(x==y)
		{
			cout<<n<<" "<<n<<endl;
			continue;
		}
		else if(n-x<n-y)
		{
			y=y+(n-x);
			x=n;
		}
		else
		{
			x=x+(n-y);
			y=n;
		}
		if(x==n)
		{
			int xr=n,yr=y;
			int xt=y,yt=n;
			int xl=0,yl=n-y;
			int xb=n-y,yb=0;
			if(k==1)
			{
				cout<<xr<<" "<<yr<<endl;
			}
			else if(k==2)
			{
				cout<<xt<<" "<<yt<<endl;
			}
			else if(k==3)
			{
				cout<<xl<<" "<<yl<<endl;
			}
			else
			{
				cout<<xb<<" "<<yb<<endl;
			}
		}
		else
		{
			int xt=x,yt=n;
			int xr=n,yr=x;
			int xb=n-x,yb=0;
			int xl=0,yl=n-x;
			if(k==1)
			{
				cout<<xt<<" "<<yt<<endl;
			}
			else if(k==2)
			{
				cout<<xr<<" "<<yr<<endl;
			}
			else if(k==3)
			{
				cout<<xb<<" "<<yb<<endl;
			}
			else
			{
				cout<<xl<<" "<<yl<<endl;
			}
		}
	}
	return 0;
}

