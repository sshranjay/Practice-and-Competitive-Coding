#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int ans=a*b;
	    if(ans%2!=0)
	    	cout<<(ans+1)/2<<endl;
	    else
			cout<<ans/2<<endl;	
	}
	return 0;
}

