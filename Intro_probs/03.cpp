#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(a) for (int i=0;i<a;i++)
#define pb(a) push_back(a)
#define pf(a) push_front(a)




int main(){
   string s;
   cin >> s;
   char t=s[0];
   ll m1=1;
   ll m2=1;
   for(int i=1;i<s.length();i++){
       
       if(t==s[i]){
           m1++;

       }
       else{
          
           t=s[i];
           m1=1;
       }
        m2=max(m1,m2);

   }
   cout<<m2<<endl;
}