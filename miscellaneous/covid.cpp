#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N,K,X,Y;
	    cin>>N>>K>>X>>Y;
	    for(int k=0;k<=N;k++)
	    {
	        if(X==Y){
	            cout<<"YES";
	            goto end;
	        }
	        X=X+K;
	        while(X>N-1)
	        {
	            X=X-N;
	        }
	    }
	    cout<<"NO";
	    end:;
	}
	return 0;
}

