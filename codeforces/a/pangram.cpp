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
    string s;cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++)
        a[toupper(s[i])-65]=1;

    for(int i=0;i<26;i++)
        if(a[i]==0){
            cout<<"NO";
            return 0;}
    cout<<"YES";


    return 0;}
