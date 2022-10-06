#include <bits/stdc++.h>

using namespace std;

const int N = 1500;
int n,k;
string tab[N];
set<string> sett;
set<vector<string>> settt;
vector<string> strings;


string compstring(string s1, string s2)
{
    string r="";
    for(int i=0;i<k;i++)
    {
        if(s1[i]==s2[i])
            r+= s1[i];
        else
        {
            if(s1[i] == 'S')
            {
                if(s2[i] == 'E')
                    r+= 'T';
                else
                    r+= 'E';
            }
            else if(s1[i] == 'E')
            {
                if(s2[i] == 'S')
                    r+= 'T';
                else
                    r+= 'S';
            }
            else
            {
                if(s2[i] == 'E')
                    r+= 'S';
                else
                    r+= 'E';
            }
            
        }
    }
    return r;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin >> n >> k;
    string str;

    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
        sett.insert(tab[i]);
    }



    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            string s1 = tab[i];
            string s2 = tab[j];
            string s3 = compstring(s1,s2);
            if(sett.find(s3)!= sett.end())
            {
                strings.clear();
                strings.push_back(s1);
                strings.push_back(s2);
                strings.push_back(s3);
                sort(strings.begin(),strings.end());
                settt.insert(strings);
            }
        }
    cout << settt.size();
   
    return 0;
}