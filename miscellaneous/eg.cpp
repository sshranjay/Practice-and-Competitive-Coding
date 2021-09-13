#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	for(int i=1;i<n;i++)
		cout<<arr[i-1];
}

