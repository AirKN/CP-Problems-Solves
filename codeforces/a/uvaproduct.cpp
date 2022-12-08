#include<bits/stdc++.h>
using namespace std;
const int M=600;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;
    while(cin>>a){
        cin>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int s[M];
        memset(s, 0, sizeof(s));
        for(int i=0; i<a.length();i++){
            for(int j=0; j<b.length();j++){
                s[i+j]+=(a[i]-'0')*(b[j]-'0');}}

        for(int i=0; i<M-1; i++){
            s[i+1]+=s[i]/10;
            s[i]%=10;
        }

        int i=M-1;
        while(i>0 && s[i]==0) i--;
        for(;i>=0;i--) cout<<s[i];
        cout<<'\n';

    }

    return 0;}

