#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		if(!(n&n-1) && n!=1)
		{
			cout<<"-1"<<endl;continue;
		}
		for(int j=0;j<n;j++)
		{
			if((j+1)&j || j==0)
			{
				arr[j]=j+1;
			}
			else{
				arr[j]=j+2;arr[j+1]=j+1;j++;
			}
		}
		if(n>=5)
		{
			int x=arr[0]; arr[0]=arr[2]; arr[2]=x;
		}
		for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
	}

	return 0;
}

