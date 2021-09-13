#include <iostream>
using namespace std;

int lcm(int a, int b)
{
	int lc;
    for(int i=b;i<=a*b;i++)
    {
            if(i%a==0 && i%b==0) 
    	    {
				lc=i;
    	    	break;
    	    }		
	}
	return lc;
}
int main()
{	
	int t;
	printf("input the number of test cases:\n");
	scanf("%d",&t);
	for(int q=1;q<=t;q++)
	{
		int n;
		printf("\nenter the value of n:");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=i+1;
			printf("%d\t",arr[i]);	
		}
		printf("\n\n");
		int count=0;
		int j=n-1;
		while(j>2)
		{
			j=n-1;
			while(arr[j]==arr[j-1])
			{
				j--;
			}
			arr[j]=arr[j-1]=lcm(arr[j],arr[j-1]);
			count++;	
				for(int i=0;i<n;i++)
				{	
					printf("%d\t",arr[i]);
				}
				printf("\n");
		}
		printf("MIN. time for test case %d :%d",q,count);
	}
return 0;
}



