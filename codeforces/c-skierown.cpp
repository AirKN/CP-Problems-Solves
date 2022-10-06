#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> p;

bool found(pair<int,int> pr, vector<pair<int,int>> p, int pos)
{
    for(int i=0; i<=pos; i++)
    {
        if( ( (  p[i].first+p[i+1].first )  ==  (pr.first+p[pos].first) )
            && ((  p[i].second+p[i+1].second )  ==  (pr.second+p[pos].second) ) )
                return true;
                
         /* if(pos > 4)
            if( ( (p[i].first == pr.first ) && (p[i+1].first == p[pos-1].first)) 
            && ((p[i].second == pr.second ) && (p[i+1].second == p[pos-1].second)))
                return true;
        else if(  (p[i].first == pr.first) && (p[i].second == pr.second))
           return true; */
    }
    return false;
}



int main()
{
    std::ios_base::sync_with_stdio(false);
    cin >> n;


    string ch;
    int sc,z;

    for(int i=0;i<n;i++)
    {
        cin >> ch;
        z = ch.size();
        p.clear();
        p.push_back(make_pair(0,0));
        for(int j=1;j<z+1;j++)
        {
            switch(ch[j-1])
            {
                case 'N':p.push_back(make_pair(p[j-1].first,p[j-1].second+1));break;
                case 'W':p.push_back(make_pair(p[j-1].first-1,p[j-1].second));break;
                case 'E':p.push_back(make_pair(p[j-1].first+1,p[j-1].second));break;
                case 'S':p.push_back(make_pair(p[j-1].first,p[j-1].second-1));break;
            }
        }

        sc=0;
        
        for(int j=1;j<=z;j++)
        {
            if(found(p[j],p,j))
                sc++;
            else
                sc+=5;
        }
        
        cout<< sc <<"\n";

    }
    return 0;
}