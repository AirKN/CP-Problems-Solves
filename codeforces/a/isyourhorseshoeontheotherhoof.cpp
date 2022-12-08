#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a[4];
    for(int i=0;i<4;i++)
        cin>>a[i];
    int c=0;
    for(int i=1;i<4;i++)
        for(int j=0;j<i;j++)
            if(a[i]==a[j]){
                c++;
                break;}
    cout<<c;

    return 0;}
