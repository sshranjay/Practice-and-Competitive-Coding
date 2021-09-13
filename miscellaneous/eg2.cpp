#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
	    int n,k,i;
	    int count=0,ans=0;
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;++i)
	        cin>>arr[i];
	    i=0;
	    while(i<n && count>-1){
	        count=count+arr[i]-k;
	        ++i;
	    }
	    if(count<0){
	        cout<<i<<endl;
	    }
	    else
		{
	    	ans=i+1+count/k;
	    	cout<<ans<<endl;
		}
	    
	}
return 0;
}
