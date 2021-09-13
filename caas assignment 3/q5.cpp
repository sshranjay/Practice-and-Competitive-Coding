/*find all triplets with the given sum in the array*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:"; 
	cin>>n;
	int sum;
	cout<<"Enter the sum:"; 
	cin>>sum;
	int arr[n];
	cout<<"Enter the array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==sum)
				{
					cout<<"{"<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"}"<<endl;
				}
			}
		}
	}
	return 0;
}
