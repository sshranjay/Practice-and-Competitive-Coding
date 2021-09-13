#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> A;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		A.push_back(x);
	}
	int b;
	cin>>b;
    int sum=0;
    n=A.size();
    int left=0,right=n-1;
    while(b>0)
    {
        if(A[left]>A[right])
        {
            sum+=A[left];
            b--;
            left++;
        }
        else if(A[left]<A[right])
        {
            sum+=A[right];
            b--;
            right--;
        }
        else
        {
            sum+=A[right];
            b--;
            right--;
        }
        //cout<<sum<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"size"<<n<<endl;
    cout<<"ans"<<sum;
}

