#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long long n,q;
    cin>>n>>q;
  //  vector<long long> count_numbers;
    long long  occurence[100000];
//    vector<long long> occurence_number;
    for(int i=0;i<q;i++){
        int n1,n2,occur_count=0;
        cin>>n1>>n2;
 
        if(n1==1){
            //count_numbers.push_back(n2);
            occurence[n2]++;
        }else{
            cout<<occurence[n2]<<'\n';
        }
    }
 
    return 0;
}
