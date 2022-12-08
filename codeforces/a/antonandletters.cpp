#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;getline(cin,s);
    int c=0,l=s.size();
    int a[26];
    for(int i=0;i<l;i++)
        if(isalpha(s[i]))
            a[s[i]-'a']=1;
    for(int i=0;i<26;i++)
        if(a[i]==1)
            c++;
    cout<<c;

    return 0;}
