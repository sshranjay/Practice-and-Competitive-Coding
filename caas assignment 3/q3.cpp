/*sort the first half in ascending and second half in descending order in a given array*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:"; 
	cin>>n;
	int arr[n];
	cout<<"Enter the array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n/2;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=n-1;i>=n/2;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
