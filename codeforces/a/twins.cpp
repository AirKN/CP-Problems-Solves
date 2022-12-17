#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define iii pair<int,pair<int,int> >

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];}
    sort(a,a+n,greater<int>());
    int t=0,c=0;
    for(int i=0;i<n;i++){
        c++;
        t+=a[i];
        if(t > (s-t)){
            cout<<c;
            return 0;}

    }

    return 0;}
