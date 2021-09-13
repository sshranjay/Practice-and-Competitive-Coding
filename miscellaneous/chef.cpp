#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, K;
	scanf("%d %d",&N,&K);
	
	int arr[N];
	int count=0;
	int i=0;int j;
	for(int z=0;z<N;z++)
	{
		scanf("%d",&arr[i]);
	}
//	printf("hi");
	while(i<N-1)
	{
	    
	    j=arr[i];
	    if(arr[i]>K)
	       {
	       		//printf("2");
	           printf("-1");
	            exit(0);
	       }     
	    while(j<K) 
	    {
	        i++;//printf("1");
	        j=j+arr[i];
	    }
	    count++;
	}
	printf("%d",count);
	//printf("hi");
	return 0;
}

