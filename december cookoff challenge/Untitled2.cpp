#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string b;
	int count;
		cin>>b;
	for(int i=0;i<n;i++)
	{
		if(b[i]=='1')
		{
			count++;
		}
	}
	
	cout<<b<<endl<<count;
	return 0;
}

