#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,r;cin>>k>>r;
    int n=0,c=0;
    do{
        n+=k;
        c++;
    }while(n%10!=0 && n%10!=r);

    cout<<c;
    return 0;}
