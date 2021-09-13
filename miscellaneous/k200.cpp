#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int arr[8];
	int arr1[8];
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<m;i++)
	{
		if(arr[1]==0)
		{
			arr1[0]=0;
		}
		else{
			arr1[0]=1;
		}
		if(arr[6]==0)
		{
			arr1[7]=0;
		}
		else{
			arr1[7]=1;
		}
		for(int j=1;j<7;j++)
		{
			if(arr[j]==arr[j-1]==arr[j+1])
			{
				arr1[j]=0;
			}
			else{
				arr1[j]=1;
			}
		}
		for(int i=0;i<8;i++)
		{
			arr[i]=arr1[i];
		}
				
	}
	for(int k=0;k<8;k++)
		{
			cout<<arr1[k]<<" ";
		}
	return 0;
}
