#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string b;
	    cin>>b;
	    float count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]=='1')
	        {
	            count++;
	        }
	        
	    }
	    for(int i=n;i<=120;i++)
	    {
	    	count++;
		}
		count=90;
		if(count*100/120>=75)
	        {
	            cout<<"YES"<<endl;
	        }
	    else{
	       		cout<<"NO"<<endl;
	        } 

	}
	return 0;
}

