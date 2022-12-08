#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int a[60],l=s.length(),j=0;
    for(int i=0;i<l;i++){
        if(s[i]!='+'){
            a[j]=s[i]-'0';
            j++;}
    }
    sort(a,a+j);
    for(int i=0;i<j-1;i++)
        cout<<a[i]<<'+';
    cout<<a[j-1];
    return 0;}
