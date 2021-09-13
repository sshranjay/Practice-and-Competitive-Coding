#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n,greater<int>());
	    int ans=0;
	    if(n<=2)
	    {
	    	cout<<arr[0]<<endl;continue;
		}
		int a,b,p=2;
		a=arr[0];b=arr[1];
		while(p<n)
		{
	    	if(b<a)
	    	{
	    		a-=b;
	    		ans+=b;
	    		b=arr[p];p++;
			}
			else{
				b-=a;
				ans+=a;
				a=arr[p];p++;
			}	
		}
		if(b>a)
	    	{
	    		ans+=b;
			}
		else{
    		ans+=a;
		}	
	    cout<<ans<<endl;
	}
	return 0;
}
	
