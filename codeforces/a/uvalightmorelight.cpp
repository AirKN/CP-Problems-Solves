#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unsigned int n;
    while(cin>>n && n!=0){
        unsigned int s=(int) sqrt(n);
        cout<<((s*s == n)? "yes\n": "no\n");
    }
    return 0;}
