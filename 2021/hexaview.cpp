#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="Hexaview hires the best";
	stringstream ss(s);
	vector<string> vec;
	int count=0;
	string w;
	while(ss>>w)
	{
		count++;
		vec.push_back(w);
	}
	int n=vec.size();
	if(n%2)
	{
		cout<<vec[n/2].size();
		return 0;
	}
	cout<<max(vec[n/2].size(),vec[(n/2)-1].size());
	
//	int space=0;
//	for(int i=0; i<s.size(); i++)
//	{
//		cout<<s[i]<<endl;
//	}
//	cout<<space;
	return 0;
}
