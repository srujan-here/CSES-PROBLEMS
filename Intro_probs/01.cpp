#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(a) for (int i=0;i<a;i++)
#define pb(a) push_back(a)
#define pf(a) push_front(a)
int main(){
ll a;
cin>>a;
cout<<a<<" ";
while((a>0)&&(a!=1)){
    if(a%2==0){
        a=a/2;
        cout<<a<<" ";
    }
    else{
        a=(a*3)+1;
        cout<<a<<" ";
    }
}

}