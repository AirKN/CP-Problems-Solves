#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[100];for(int i=0;i<n;i++) cin>>a[i];
    int m,x,y;cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        x--;
        if(x!=0 && x!=n-1){
            a[x-1]+=y-1;
            a[x+1]+=a[x]-y;}
        else if(x==0)
            a[x+1]+=a[x]-y;
        else if(x==n-1)
            a[x-1]+=y-1;
        a[x]=0;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<'\n';



    return 0;}
