///Using Prefix Sum

#include <iostream>
using namespace std;

int main()
{
    long long n,q;
    int input;
    cin>>n>>q;
    long long pref_sum[n+1]={0};

    for(long long i=1;i<=n;i++){
        cin>>input;
        pref_sum[i]+=pref_sum[i-1]+input;

    }

    for(long long i=0;i<q;i++){
        long long l,r;
        cin>>l>>r;
        cout<<pref_sum[r]-pref_sum[l-1]<<endl;
    }
    return 0;
}
