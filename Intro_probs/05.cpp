#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(a) for (int i=0;i<a;i++)
#define pb(a) push_back(a)
#define pf(a) push_front(a)




int main(){
    int n;
    cin>>n;
    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";

        }
         for(int i=1;i<=n;i+=2){
            cout<<i<<" ";

        }
    }cout<<endl;
   
}