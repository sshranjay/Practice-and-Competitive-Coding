#include <iostream>
using namespace std;

int main() {
	int T;
	//cin>>T;
	scanf("%d",&T);
	int ans[T];
	for(int i=0;i<T;i++)
	{
	    int count=0;
	    int n,k,x=1;
	    //cin>>n>>k;
	    scanf("%d%d",&n,&k);
	    /*if(n=0)
	    {
	    	ans[i]=1;break;
		}*/
	    int q[n];
	    for(int j=0;j<n;j++)
	    {
	        //cin>>q[j];
	        scanf("%d",&q[j]);
	    } 
	    if(k=0)
	    {
	    	ans[i]=0;
	    	break;
		}
	    for(int j=0;j<n;j++)
	    {
	    	count+=q[j];
	    	if(count<k)
			{
	    		ans[i]=x;break;
			}
			else{
				count-=k;
				x++;
			}			    	
		}
		while(count>=k)
		{
			count-=k;x++;
		}
		ans[i]=x;
	}
	for(int i=0;i<T;i++)
	{
		printf("%d\n",ans[i]);
	    //cout<<ans[i]<<endl;
	}
}
