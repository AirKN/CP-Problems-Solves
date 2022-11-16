#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t,k,d;cin>>n>>t>>k>>d;
    int o=0,c=0;
    do{
        o+=t;
        c+=k;
    }while(c<n);
    int ov=t+d;
    if(ov<o)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;}
