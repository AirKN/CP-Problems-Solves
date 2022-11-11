#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a[1000];
    int b=0,e=n-1,s=0,d=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int v;
        if(a[b]>a[e]){
            v=a[b];
            b++;}
        else{
            v=a[e];
            e--;}
        if(i%2==0)
            s+=v;
        else
            d+=v;

    }
    cout<<s<<' '<<d;
    return 0;
}
