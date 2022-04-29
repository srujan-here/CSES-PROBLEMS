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
   f(t){
       cin>>b[i];

   }
ll sum=0;
ll at=0;
   for(ll i=0;i<t;i++){
       at=max(at,b[i]);
       sum+=(at-b[i]);
      
   }
   cout<<sum<<endl;
}