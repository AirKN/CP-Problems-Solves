#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s, p;
    cin >> s >> p;
    int l=s.size(),c=0;
    for(int i=0;i<l;i++){
        if(toupper(s[i])<toupper(p[i])){
            c=-1;break;}
        else if(toupper(s[i])>toupper(p[i])){
            c=1;break;}
    }
    cout << c;
    return 0;
}
