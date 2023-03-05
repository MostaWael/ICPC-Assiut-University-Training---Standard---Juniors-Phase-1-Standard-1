#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    sort(arr.begin(),arr.end());
 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
