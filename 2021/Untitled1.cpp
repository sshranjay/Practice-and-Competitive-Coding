#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,5,20,70,8};
	int sum=0;
	int target=97;
	int n=5;
	for(int i=0; i<n; i++)
	{
		sum += arr[i];
	}
	int left=0, right=n-1;
	while(left<=right && sum>target)
	{
		cout<<sum<<endl;
		if(sum-arr[left]>target)
		{
			left++;
			sum -= arr[left];

		}
		else if(sum-arr[right]>target)
		{
			right--;
			sum -= arr[right];
		}
		else
		{
			break;
		}
	}
	int count=0;
	for(int k=left; k<=right; k++)
	{
		count++;
		cout<<endl<<arr[k]<<" "<<endl;
	}
	
	return 0;
}
