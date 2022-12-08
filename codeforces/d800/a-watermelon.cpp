#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    for(int i=1;i <n;i++)
    {
        int k=n-i;
        if((k%2)==0 && (i%2)==0)
        {
            x = 1;
            break;
        }
        x = 0;
    }
    if(x)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
