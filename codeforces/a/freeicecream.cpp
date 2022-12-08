#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,x;cin>>n>>x;
    char c;long long d,r=0;
    for(int i=0;i<n;i++){
        cin>>c>>d;
        if(c=='+')
            x+=d;
        if(c=='-')
            if(d>x)
                r++;
            else
                x-=d;
    }
    cout<<x<<' '<<r;
    return 0;}
