#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string word;
    cin>>word;
    vector<int> char_frequency(123,0);
    for(int i=0;i<word.size();i++){
        char_frequency[((int)word[i])]++;
    }
    for(int i=65;i<123;i++){
        if(char_frequency[i]!=0){
        cout<<(char)i<<" "<<char_frequency[i]<<endl;
        }
    }

   // cout <<<< endl;
    return 0;
}
