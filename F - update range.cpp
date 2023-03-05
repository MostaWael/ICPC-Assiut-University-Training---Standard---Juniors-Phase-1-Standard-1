#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;

    vector<long long>arr(n+1);
    vector<long long>arr_partial_sum((n+3),0);

    //step 1:
    for(long long i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(long long i=1;i<=q;i++){
        long long l,r,val;
        cin>>l>>r>>val;
        arr_partial_sum[l]+=val;
        arr_partial_sum[r+1]-=val;
    }

    for(long long i=2;i<=n+3;i++){
        arr_partial_sum[i]+=arr_partial_sum[i-1];
    }

    for(long long i=1;i<=n;i++){
        cout<<arr_partial_sum[i]+arr[i]<<" ";
    }

    return 0;
}
