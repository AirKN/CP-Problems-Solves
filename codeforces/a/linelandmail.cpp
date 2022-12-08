#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++){
        ll ma=abs(a[i]-a[n-1]);
        ll mi=abs(a[i]-a[0]);
        if(i==0)
            mi=abs(a[i]-a[1]);
        if(i==n-1)
            ma=abs(a[i]-a[n-2]);
        cout<<mi<<' '<<ma<<'\n';
    }


    return 0;}
