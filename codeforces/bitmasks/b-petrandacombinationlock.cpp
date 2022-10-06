#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];


    //realised smth, to get possible combinisations do:  
    //number of possible values to the power of the number of objects  k^n,         here 1<<n cuz k =2
    


    for(int i=0;i<(1<<n);i++)
    {
        int res = 0;
        for(int j=0;j<n;j++)
        {
            int bitm = 1<<j;
            int cal = i&bitm;
            if(cal==0)
                res+=v[j];
            else
                res-=v[j];
        }
        if(res % 360 == 0)
        {
            cout << "YES\n";
            return 0;
        }

    }
    cout <<"NO\n";

    return 0;
}