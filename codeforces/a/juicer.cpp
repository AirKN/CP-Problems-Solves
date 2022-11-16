#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,b,d;cin>>n>>b>>d;
    int c=0,p=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>b) continue;
        c+=x;
        if(c>d){ c=0; p++;}
    }
    cout<<p;
    return 0;}
