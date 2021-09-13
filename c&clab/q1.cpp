#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define INF 999
using namespace std;
int **tbl;

struct chart
{
	int vm,t,ct;
	struct chart *next;
}*start=NULL;


void add(int x,int y,int z)
{
	struct chart *temp=(struct chart *)malloc(sizeof(struct chart));
	temp->vm = ( temp->t = y, temp->ct = z, temp->next = NULL, x );
	if(start==NULL)
		start=temp;
	else
	{
		struct chart *x=start;
		for(;x->next!=NULL;x=x->next);
		x->next = temp;
	}
	printf("T%d got assigned to VM%d\tCompletion Time: %d\n",y+1,x+1,z);
}

void display(int m,int n)
{
	printf("Task:\t");
	for(int i=1;i<=n;i++)
		printf(" %d \t",i);
	printf("\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(tbl[i][j]!=INF)
				printf("\t%3d",tbl[i][j]);
			else
				printf("   \t");
		printf("\n");
	}
	printf("\n");
}

void minmin(int m,int n,int ct)
{
	if(ct==n)
		return;
	int ar[2][n];
	for(int i=0;i<n;i++)
		if(tbl[0][i]==INF)
			ar[0][i]=INF;
	printf("Table:\n\n");
	display(m,n);
	for(int i=0;i<n;i++)
	{
		int min = 0;
		for(int j=0;j<m;j++)
			if(tbl[min][i]>tbl[j][i])
				min=j;
		ar[0][i] = (ar[1][i] = min, tbl[min][i]);
	}
	int min = 0;
	for(int i=0;i<n;i++)
	{
		if(ar[0][min]>ar[0][i])
			min = i;
	}
	add(ar[1][min],min,ar[0][min]);
	for(int i=0;i<m;i++)
		tbl[i][min] = INF;
	for(int i=0;i<n;i++)
		if(tbl[ar[1][min]][i]!=INF)
			tbl[ar[1][min]][i] += ar[0][min];
	minmin(m,n,ct+1);
}


int main()
{
	int n,m;
	printf("Input Number of tasks: ");
	scanf("%d",&n);
	printf("Input Number of machines: ");
	scanf("%d",&m);
	tbl = (int* *)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++)
		tbl[i]=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Input completion time of T%d in each machine:\n",i+1);
		for(int j=0;j<m;j++)
			scanf("%d",&tbl[j][i]);
	}
	int select;
	cout<<"select the operation:\nPress 1- MIN-MIN\nPress 2- MIN-MAX\nPress 3- FCFS\nPress 4- ROUND-ROBIN\nPress 5- SUFFERAGE\n";
	cin>>select;
	switch(select)
	{
		case 1:
			minmin(m,n,0);
		//	gnatt(m,n);
			break;
		case 2:
			minmin(m,n,0);
		//	gnatt(m,n);
			break;	
		case 3:
			minmin(m,n,0);
		//	gnatt(m,n);
			break;
		case 4:
			minmin(m,n,0);
		//	gnatt(m,n);
			break;
		case 5:
			minmin(m,n,0);
		//	gnatt(m,n);
			break;			
	}
}

//void gnatt(int m,int n)
//{
//	printf("\nGnatt Chart:\n\n");
//	for(int i=0;i<m;i++)
//	{
//		int time = 0;
//		printf("VM%d:\t",i+1);
//		struct chart *x = start;
//		for(;x!=NULL;x=x->next)
//		{
//			if(x->vm==i)
//			{
//				if(time==0)
//					printf("%d\tT%d\t%d\t",time,(x->t)+1,x->ct);
//				else
//					printf("T%d\t%d\t",(x->t)+1,x->ct);
//				time=x->ct;
//			}
//		}
//		printf("\n");
//	}
//}
