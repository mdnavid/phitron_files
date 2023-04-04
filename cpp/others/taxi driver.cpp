#include<bits/stdc++.h>

using namespace std ;

int main()
{

    vector<int>v ;
    map<int,int>mp ;

    int n, m ;

    cin >> n >> m ;

    int ride[n+m], tax[n+m] ;

    for(int i=0 ; i<n+m ; i++)
        cin >> ride[i] ;
    for(int i=0 ; i<n+m ; i++)
    {
        cin >> tax[i] ;
        if(tax[i])
        {
            v.push_back(ride[i]) ;
            mp[ride[i]] ;
        }
    }
    int p1 = v[0], p2 = v[0] ;
    for(int i=0,j=0 ; i<n+m ; i++)
    {

        if(p2<ride[i])
        {
            p1 = p2 ;
            j++ ;
            if(j<m)
                p2 = v[j] ;
            else
                p2 = v[m-1] ;
        }
        if(tax[i])
            continue ;
        if(ride[i]-p1<=p2-ride[i])
            mp[p1]++ ;
        else
            mp[p2]++ ;
    }

    map<int,int> :: iterator it ;

    for(it=mp.begin() ; it!=mp.end() ; it++)
        cout << it->second << " " ;

    cout << endl ;

}
