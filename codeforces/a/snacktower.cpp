#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define iii pair<int,pair<int,int> >

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int a,b[n]={0},x=n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==x){
            cout<<a;
            x--;
            for(int j=x-1;b[j]!=0 && j>=0;j--){
                cout<<' '<<b[j];
                x--;}
        }
        else
            b[a-1]=a;
    cout<<'\n';
    }


    return 0;}
