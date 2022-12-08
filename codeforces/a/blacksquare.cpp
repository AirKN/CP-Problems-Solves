#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<(int)n;i++)

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long a[4];cin>>a[0]>>a[1]>>a[2]>>a[3];
    string s;cin>>s;long l=s.size();
    long long r=0;
    for(long i=0;i<l;i++)
        r+=a[(s[i]-'0')-1];
    cout<<r;
    return 0;}
