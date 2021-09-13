#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x==1)
	    {
	    	cout<<"0"<<" 1"<<endl;goto end;
		}
	    for(int i=1,j=x-1;i<=x/2;i++,j--)
	    {
	        if((i&j) + (i|j) ==x)
	        {
	            cout<<i<<" "<<j<<endl;
	            goto end;
	        }
	        cout<<"-1"<<endl;
	    }
	    end:;
	}
	return 0;
}
