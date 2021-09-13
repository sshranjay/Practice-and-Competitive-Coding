#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define S second
#define F first
#define pb push_back
#define mp make_pair
#define pi 3.1415926535
#define MAX 
vector <int> primes;
int ans[1000001];
void sieveoferatosthenes(int n)
{
    ans[0]=0,ans[1]=0,ans[2]=1,ans[3]=2;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=4; p<=n; p++)
    {
      if(prime[p])
        ans[p]+=ans[p-1]+2;
      else
        ans[p]=ans[p-1]+1;
    }

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieveoferatosthenes(1000001);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      cout<<ans[n]<<"\n";
    }
    return 0;
}
