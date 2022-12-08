#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        int l=s.length(),c=0;
        if(l==1 && s[0]!='Y' && s[0]!='e' && s[0]!='s') {cout<<"NO"<<'\n';continue;}
        else
            for(int i=1;i<l;i++){
                switch(s[i]){
                    case 'Y':if(s[i-1]!='s')c=1;break;
                    case 'e':if(s[i-1]!='Y')c=1;break;
                    case 's':if(s[i-1]!='e')c=1;break;
                    default:c=1;break;}
                if(c==1){cout<<"NO"<<'\n';break;}}
        if(c==0)
            cout<<"YES"<<'\n';
    }
    return 0;}
