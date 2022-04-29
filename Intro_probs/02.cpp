#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(a) for (int i=0;i<a;i++)
#define pb(a) push_back(a)
#define pf(a) push_front(a)




int main(){
    ll t;
    cin>>t;
    ll b[t];
    ll s1=0;
   f(t-1){
       cin>>b[i];
   }
   f(t-1){
       s1+=b[i];
   }
    ll s2=(t*(t+1))/2;
    cout<<abs(s1-s2)<<endl;
}