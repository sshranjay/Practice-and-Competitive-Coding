#include<bits/stdc++.h> 
using namespace std; 

  
// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
			int i1=0,j1=1;
			int nt=n;
			while(nt--)
			{
				if(k==0)
				{
					goto end;
				}
				while(arr[i1]==0 && i1<n-2)
					{i1++;}
				while((arr[j1]==0 && j1<n-1) || (j1==i1&&j1<n-1))
					{j1++;}	
				int p = (int)log2(arr[i1]);
				p=pow(2,p);
				if(arr[i1]==0)
				{
					p=1;
				}
				arr[i1]=arr[i1]^p;
				while((arr[j1]^p)>arr[j1] && j1<n-1)
				{
					j1++;
				}
				arr[j1]=arr[j1]^p;
				j1=i1+1;	
				k--;
			}
//			if(n-2!=0||n-2!=1)
//			{
//				while(arr[i1]==0 && i1<n-2)
//					{
//					i1++;}
//				while((arr[j1]==0 && j1<n-1) || (j1==i1&&j1<n-1))
//					{
//					j1++;}
//				int p = (int)log2(arr[i1]);
//				p=pow(2,p);
//				if(arr[i1]==0)
//				{
//					p=1;
//				}
//				arr[i1]=arr[i1]^p;
//				while((arr[j1]^p>arr[j1])&& j1<n-1)
//				{
//					j1++;
//				}
//				arr[j1]=arr[j1]^p;
//			}
		end:;
		for(int q=0;q<n;q++)
		{
			cout<<arr[q]<<" ";	
		}  
	}
	return 0; 
} 
