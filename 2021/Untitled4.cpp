#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int curr=arr[0];
	int j=0;
	j++;
	for(int i=0; i<n; i++)
	{
		if(curr!=arr[i])
		{
			curr=arr[i];
			arr[j]=curr;
			j++;
		}
	}
	cout<<j<<endl;
	for(int i=0; i<j; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
