#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,d,prob=0,count=0;
	    cin>>n>>k>>d;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        prob+=a[i];
	    }
	    
	    int temp=prob/k;
	    if(temp<=d)
	    {
	    	cout<<temp<<endl;
		}
		else
		{
			cout<<d<<endl;
		}
	}
	return 0;
}

