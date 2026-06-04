#include <bits/stdc++.h>
using namespace std;
int main() {
    
   int n,m;
   cin>>n>>m;

   int carry=0;

   while(n>0 and m>0){
        int r1=n%10;
        int r2=m%10;

        if (r1+r2>=10){
            carry++;
        }
        n/=10;
        m/=10;
   }
   cout<<carry;
    return 0;
}