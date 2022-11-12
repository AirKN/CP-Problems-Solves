#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int h[30],g[30];
    for(int i=0;i<n;i++)
        cin>>h[i]>>g[i];

    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            if(h[i]==g[j])
                c++;
        }
    }
    cout<<c;
    return 0;}
