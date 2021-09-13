#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int d=0,sum=0;
	while(sum<p)
	{
		d++;
	    if(d>=d1)
	    {
	        sum+=v1;
	    }
	    if(d>=d2)
	    {
	        sum+=v2;
	    }
	}
	cout<<d;
	return 0;
}

