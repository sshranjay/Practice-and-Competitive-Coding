#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	 //your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		for(int i=0;i<n;i+=4)
		{
			int dec=int(a[i])*8+(a[i+1]*4)+(a[i+2]*2)+(a[i+3]*1)-720;
			cout<<char(dec+97)<<endl;
			cout<<a[i+1];
		}
		cout<<endl;
	}
	return 0;
}

