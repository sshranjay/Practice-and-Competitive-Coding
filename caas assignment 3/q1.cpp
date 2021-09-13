/*sum of all pairs in a given array*/
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=sum+arr[i]+arr[j];
		}
	}
	cout<<"Sum:"<<sum;
	return 0;
}
