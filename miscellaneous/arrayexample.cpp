#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int T;
		cin>>T;
		int arr[N]={0};
	for(int i=0;i<T;i++)
	{
		int N;
		cin>>N;
		if(N==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=N;j++)
			{
				if(i!=j)
				{
					if(i&j)
					{
						arr[0]=i;arr[1]=j;
						i=N+1;j=N+1;
					}
				}
				
			}
		}
		if(arr[0]==0)
		{
			cout<<"-1"<<endl;
			break;
		}
		int k=1;
		while(k<N-1)
		{
			int j=arr[k];
			for(int i=1;i<=N;i++)
			{
				if(i!=j)
				{
					
						if(j&i)
						{
							arr[k+1]=i;k++;
						}
				}
			}
		}
	}	
	/*	for(int i=0;i<N;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;	
	*/
}

