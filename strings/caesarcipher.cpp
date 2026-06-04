#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string given="SBIVM";
    string ans;

    int shift;
    cin>>shift;

    shift%=26;

    for(int i=0;i<given.length();i++){
        char ch=given[i]+shift;
        ans.push_back(ch); 
    }
    cout<<ans;
    return 0;
}