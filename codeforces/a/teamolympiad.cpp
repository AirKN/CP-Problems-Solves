#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int g,a[4][5001],c[4]={0};
    for(int i=1;i<=n;i++){
        cin>>g;
        c[g]++;
        a[g][c[g]]=i;}
    int nt=min(min(c[1],c[2]),c[3]);
    cout<<nt<<'\n';
    if(nt==0) return 0;
    for(int i=1;i<=nt;i++)
        cout<<a[1][i]<<' '<<a[2][i]<<' '<<a[3][i]<<'\n';

    return 0;}
