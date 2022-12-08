#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    char s[n+1];
    for(int i=0;i<n;i++)
        s[i]='a'+(i%k);
    s[n]='\0';
    cout<<s;
    return 0;}
