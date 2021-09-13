#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;
long long int t,count=0,max,ind;

long long int calcu(long long int a[],long long int n)
{
    vector<long long int>t1;
    vector<long long int>t2;
    t1.clear();
    t2.clear();
    
    long long int x1=0,x2=0;
    for(long long int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            t1.push_back(a[i]);
          //  cout<<"t1 : "<<a[i]<<"\n";
            x1 = x1 ^ a[i];        
        }
        else{
         t2.push_back(a[i]);
         //cout<<"t2 : "<<a[i]<<"\n";
         x2 = x2 ^ a[i] ;
            
        }
    }
    
   // cout<<x1<<"  "<<x2<<"\n";
    
    if(x1>x2)
     return 1;
    else
     if(x1<x2)
       return 0;
       else
        return -1;
    
    
}
/*void display(long long int a[],long long int n) 
{ 
    for (long long int i = 0; i < n; i++) { 
        cout << a[i] << "  "; 
    } 
    cout << endl; 
} */

int func(long long int a[],long long int n)
{
    long long int l=0;
   sort(a, a + n); 
  
    do { 
       // display(a,n);
        long long int temp = calcu(a,n);
        
        if(temp ==1)
        return temp;
        else
         if(temp ==0)
          l++;
        
        
    } while (next_permutation(a, a + n)); 
    
    if(l==0)
    return -1;
    else
     return 0;
}

int main()
{
    
 
    cin>>t;
    long long int v1[t];
    
    for(long long int i=0;i<t;i++)
    {
        
        cin>>v1[i];
        
    }
    
     cout<<func(v1,t);
     
     
    
    
    
    
    return 0;
    
}
