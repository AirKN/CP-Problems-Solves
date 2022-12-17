#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cout<<min(a[i+1]-a[i],a[i]-a[i-1])<<' '<<max(a[i]-a[0],a[n-1]-a[i])<<'\n';


    return 0;}
