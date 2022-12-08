#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;int l=s.size();
    char p='a';int r=0;
    for(int i=0;i<l;i++){
        int x=abs(p-s[i]);
        if(x<13)
            r+=x;
        else
            r+= 26-x;
        p=s[i];
    }
    cout<<r;
    return 0;}
