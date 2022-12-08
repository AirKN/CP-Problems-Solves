#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,t;cin>>s>>t;
    int l=s.size(),p=t.size(),j=0;
    int i=0;
    while(i<p && j<l){
        if(t[i]==s[j])
            j++;
        i++;}
    cout<<j+1;
    return 0;}
