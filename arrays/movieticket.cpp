#include <bits/stdc++.h>
using namespace std;
//nqt problem
int main() {
	int n;
	cin>>n;
	int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    
    int m;
	cin>>m;
	int r[m];
    for(int i=0;i<m;i++){
        cin>>r[i];
    }
    
    vector <int>ans;
    
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(r[i]==t[j]){
                ans.push_back(r[i]%10);
                found=true;
                break;
            }
            
        }
        
        if(found==false){
            ans.push_back(-1);
            }
    }
    sort(ans.begin(),ans.end());
    for(int it:ans){
        cout<<it;
    }
}
