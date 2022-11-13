#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int y,w;cin>>y>>w;
    int p=6-max(y,w)+1;
    int k=0;
    do{
        k++;
    }while((p*k)%6 != 0);
    k=6/k;
    cout<<p/k<<'/'<<6/k;
    return 0;}
