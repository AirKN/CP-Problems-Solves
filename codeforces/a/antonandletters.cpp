#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    int c=0,l=s.size();
    for(int i=1;i<l-1;i+=3){
        cout<<i;
        for(int j=1;j<l-1;j+=3){
            cout<<j;
            if(i==j) continue;
            if(s[i]==s[j]){
                c--; break;}
        }
        c++;
    }
    cout<<c;

    return 0;}
