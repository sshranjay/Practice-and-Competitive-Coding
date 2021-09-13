#include<iostream>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        long long int arr[n];
        long long int x=0,sum=0,yy=0;
        for(int u=0;u<n;u++)
        {scanf("%lli",&arr[u]);
    
        sum=sum+arr[u];
        yy=yy|sum|arr[u];
        }
        
        printf("%lli\n",yy);
    }
    //printf("%d",100|1);
}
