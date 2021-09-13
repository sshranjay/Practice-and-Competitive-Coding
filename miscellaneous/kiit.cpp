#include<iostream>
using namespace std;
int main()
{
//int n; 
//scanf("%d",&n); 
//for(int i=0;i<=2*n-2;i++) {
//for(int j=0;j<=2*n-2;j++) 
//{
//if(j==i || i+j==2*n-2) 
//{
//if(i<n) printf("%d",i+1);
//else printf("%d",2*n-2-i+1);
//}
// else printf(" "); 
// }
// printf("\n");
// }

	int a=1;
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(i==5 && j==5)
				cout<<i;
			else if(i==j && i<5)
				cout<<i;
			else if(i==j && i>5)
				cout<<10-i;
			else if(i+j==10 && i<5)
				cout<<i;
			else if(i+j==10 && i>5)
				cout<<j;
			else
				cout<<"*";	
		}
		cout<<endl;
//		int l=9-i;
//		while(l && a!=5)
//		{
//			cout<<"*";l--;
//		}
//		if(a!=5)
//			cout<<a<<endl;
//			a++;
//	}
//	cout<<endl;
//	for(int i=1;i<=5;i++)
//	{
//		int j=i-1;
//		while(j)
//		{
//			cout<<" ";
//			j--;
//		}
//		cout<<i;
//		int k=5-i;
//		while(k)
//		{
//			cout<<"*";
//			k--;
//		}
//		int l=4-i;
//		while(l && i!=5)
//		{
//			cout<<"*";l--;
//		}
//		if(i!=5)
//			cout<<i<<endl;
	}	
}
