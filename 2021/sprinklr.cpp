#include<bits/stdc++.h>
using namespace std;

long long beautifulNumber (long long N) {
   // Write your code here
   long long int n=N;
   long long int m=N;
   long long int a=N;
   int count=0;
   while(n!=0)
   {
       n = n/10;
       ++count;
   }
   int arr[count];
   for(int i=count-1; i>=0; i--)
   {
       arr[i]=a%10;
       a=a/10;
   }
   for(int i=0; i<count; i++)
   {
       int ans=0;
       for(int j=0; j<count; j++)
       {
           if(arr[j]==arr[i])
           {
               ans++;
           }
       }
       if(ans!=arr[i])
       {
           beautifulNumber(m+1);
       }
   }
   return m;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        long long N;
        cin >> N;

        long long out_;
        out_ = beautifulNumber(N);
        cout << out_;
        cout << "\n";
    }
}
