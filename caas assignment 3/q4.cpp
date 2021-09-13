/*sort elements by frequency in an array*/
#include "bits/stdc++.h" 
using namespace std; 

int sortByFreq(int* arr, int n) 
{ 
 
    int maxE = -1; 
    for (int i = 0; i < n; i++) { 
        maxE = max(maxE, arr[i]); 
    } 

    int freq[maxE + 1] = { 0 }; 

    for (int i = 0; i < n; i++) { 
        freq[arr[i]]++; 
    } 

    int cnt = 0; 
    for (int i = 0; i <= maxE; i++) { 

        if (freq[i] > 0) { 
  
            int value = 100000 - i; 
            arr[cnt] = 100000 * freq[i] + value; 
            cnt++; 
        } 
    } 
    return cnt; 
} 
void printSortedArray(int* arr, int cnt) 
{ 

    for (int i = 0; i < cnt; i++) { 

        int frequency = arr[i] / 100000; 

        int value = 100000 - (arr[i] % 100000); 
  
       
        for (int j = 0; j < frequency; j++) { 
            cout << value << ' '; 
        } 
    } 
} 
int main() 
{ 
  	int n;
  	cout<<"enter no. of elements:";
  	cin>>n;
    int arr[n];
    cout<<"\nenter the array elements:";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int cnt = sortByFreq(arr, n); 
    sort(arr, arr + cnt, greater<int>()); 

    printSortedArray(arr, cnt); 
  
    return 0; 
} 
