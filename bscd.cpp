#include<iostream>
using namespace std;

int main(){
    int a,b;cin>>a>>b;
    int k=0;
    do{k++;}while((a*k)%b!=0);
    cout<<"BCD: "<<b/k<<'\n';
    cout<<"SCD: "<<a*k;
    return 0;
}
