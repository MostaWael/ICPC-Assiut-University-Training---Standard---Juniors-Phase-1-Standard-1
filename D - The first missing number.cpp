#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int Start=-M;

    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());


    for(int i=0;i<N;i++){

        if(arr[i]==arr[i+1]){
           continue;
        }

        else if (arr[i]!=arr[i+1]){
            if(arr[i]!=Start){
                cout<<Start;
                break;
            }
            else{
                Start++;
            }
        }
    }


    return 0;
}

