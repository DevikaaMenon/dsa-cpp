#include <bits/stdc++.h>
using namespace std;
int main() {
    
   int n,m;
   cin>>n>>m;

    int carries = 0;
    int carry = 0;

   while(n>0 or m>0){
        int r1=n%10;
        int r2=m%10;

        int sum=r1+r2+carry;
        if (sum>=10){
            carries++;
            carry+=1;
        }
        else{
            carry=0;
        }
        n/=10;
        m/=10;
   }
   cout<<carries;
    return 0;
}