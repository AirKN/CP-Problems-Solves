#include<bits/stdc++.h>
using namespace std;

#define rel(i,a,b) for(int i=a,_b=b;i<=_b;++i)
#define reb(i,a,b) for(int i=a;i>=b;--i)
#define pb push_back
#define mp make_pair
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define iii pair<int,pair<int,int> >

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;cin>>a>>b;
    if(a==b) cout<<-1;
    else cout<<max(a.length(),b.length());
    return 0;}
