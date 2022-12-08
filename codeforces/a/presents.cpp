#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        p[k]=i;}
    for(int i=1;i<=n;i++) cout<<p[i]<<' ';

    return 0;
}
