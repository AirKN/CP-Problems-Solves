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
    char c;string s;cin>>c>>s;
    int l=s.length(), p=(c=='R')?-1:1;
    string k="qwertyuiopasdfghjkl;zxcvbnm,./",r="";
    for(int i=0;i<l;i++)
        r+=k[k.find(s[i])+p];
    cout<<r;

    return 0;}
