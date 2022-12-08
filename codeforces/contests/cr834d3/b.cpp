#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    while(n--){
        int m,s;cin>>m>>s;
        vector<int> a(50);
        for(int i=0;i<m;i++) cin>>a[i];
        int x=accumulate(a.begin(),a.end(),0);
        int c=0,r=0;
        do{
            c++;
            r+=c;
        }while((x+s)>r);
        if((x+s)==r)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;}
