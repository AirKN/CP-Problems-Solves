#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,p;cin>>s;int l=s.length();
    for(int i=0;i<l;i++){
        p+=s[i];
        p+=s[i];}
        string r=p;
        reverse(r.begin(),r.end());
        cout<<r;
        return 0;}
