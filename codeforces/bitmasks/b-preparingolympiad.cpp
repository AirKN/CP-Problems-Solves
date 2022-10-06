#include <bits/stdc++.h>

using namespace std;


    int n,l,r,m;
    int v[15];


int main()
{
    
    cin >> n >> l >> r >> m;
    

    for(int i=0;i<n;i++)
        cin >> v[i];

    int count = 0;
    for(int i=1; i<(1<<n);i++)
    {
        int dif = 0;
        int nb = 0;
        int min=1e7,max=0;
        for(int j=0; j<n;j++)
        {
            int bitmask = 1<<j;
            int cal = i&bitmask;
            if(cal!=0)
            {
                dif+=v[j];
                nb++;
                max = (v[j]>max)?v[j]:max;
                min = (v[j]<min)?v[j]:min;
            }
        }
        
        if((dif >= l) && (dif <= r) && (nb >= 2) 
        && ((max-min) >= m))
            count++;
    }
    cout << count << "\n";
    return 0;
}