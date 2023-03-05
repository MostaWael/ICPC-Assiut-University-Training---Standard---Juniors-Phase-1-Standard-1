#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    long long q,last_freq=0;
    cin>>s>>q;

    vector<int>freq(s.size(),0);

    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            last_freq++;
            freq[i]=last_freq;
        }else{
            freq[i]=last_freq;
        }

    }


  /*  for(int i=0;i<s.size();i++){
            cout<<freq[i]<<" ";
    }
    cout<<endl;
*/
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;

        l--;
        r--;

        if(l==0){
            cout<<freq[r]<<endl;
        }
        else{
        cout<<freq[r]-freq[l-1]<<endl;
    }

    }
    return 0;
}
