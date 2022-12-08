#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long n; cin>>n;
    long c=0;int e,p=0;
    for(int i=0;i<n;i++){
        cin>>e;
        if(e==-1){
            if(p==0)
                c++;
            else
                p--;}
        else
            p+=e;
    }
    cout<<c;
    return 0;}
