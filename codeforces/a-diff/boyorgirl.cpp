#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int l=s.size(),c=1;
    for(int i=1;i<l;i++){
        int w=0;
        for(int j=0;j<=i-1;j++){
            if(s[i]==s[j]){
                w=1;
                break;}
        }
        if(w==0)
            c++;
    }
    if(c%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}
