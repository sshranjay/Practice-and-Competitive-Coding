
// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std; 
int fact(int n) 
{ 
   int res = 1; 
       for (int i = 2; i <= n; i++) 
           res = res * i; 
               return res; 
               }
               int nCr(int n, int r) 
               { 
                   return fact(n) / (fact(r) * fact(n - r)); 
                   } 

                   int main() {
                       int t;
                           cin>>t;
                               while(t--)
                                   {
                                           int n1,k1;
                                                   cin>>n1>>k1;
                                                           int n=n1-1;
                                                                   int r=k1-1;
                                                                           int ans=nCr(n,r);
                                                                                   cout<<ans<<endl;
                                                                                       }                                        
                                                                                           
                                                                                           }

                                                                                           
