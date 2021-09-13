/*print all distinct elements in a given array*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:"; 
	cin>>n;
	int arr[n];int sum=0;
	cout<<"Enter the array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=0;
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[i]=INT_MAX; arr[j]=INT_MAX;       // or use -69 ;)
			}
		}
		if(arr[i]!=INT_MAX)
			cout<<arr[i]<<" ";
	}
	return 0;
}
