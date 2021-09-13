#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,q,s;
	cin>>n>>q>>s;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ll=0;
	while(q--)
	{
		int last=0;
		int x,y;
		cin>>x>>y;
		int L=(x+s*ll-1)%n+1;
		int R=(y+s*ll-1)%n+1;
		if(L>R)
		{
			int temp=L;
			L=R;
			R=temp;
		}
		
	int pre[n] = { 0 }; 
    int pos[n] = { 0 }; 
    pre[0] = 1; 
    pos[n - 1] = 1; 
    int l = 0; 

    for (int i = 1; i < n; i++) { 
        if (arr[i] > arr[i - 1]) 
            pre[i] = pre[i - 1] + 1; 
        else
            pre[i] = 1; 
    } 

    l = 1; 
    for (int i = n - 2; i >= 0; i--) { 
        if (arr[i] < arr[i + 1]) 
            pos[i] = pos[i + 1] + 1; 
        else
            pos[i] = 1; 
    } 

    int ans = 0; 
    l = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] > arr[i - 1]) 
            l++; 
        else
            l = 1; 
        ans = max(ans, l); 
    } 

    for (int i = 1; i <= n - 2; i++) { 
        if (arr[i - 1] < arr[i + 1]) 
            ans = max(pre[i - 1] + pos[i + 1], ans); 
    } 
  
    cout<<ans<<endl; 
//		while(L<=R)
//		{
//			int nb=0,count=0;
//			for(int l=L-1;l<=R-1;l++)
//			{
//				if(arr[l]>nb)
//				{
//					nb=arr[l];count++;
//				}
//			}
//			if(count>last)
//			{
//				last=count;
//			}
//			L++;
//		}
//		ll=last;
//		cout<<last<<endl;
	}
	return 0;
}

