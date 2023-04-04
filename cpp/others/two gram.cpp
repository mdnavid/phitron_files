#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<string, int>mp ;

    string s[101], l ;
    char g ;

    int j, mi ;

    cin >> j ;

    for(int i=0 ; i<j ; i++)
    {
        cin >> g ;
        s[i] = g ;
    }

    mi = 0 ;

    for(int i=0 ; i<j-1 ; i++)
    {
        l = s[i] + s[i+1] ;
        mp[l]++ ;
        mi = max(mp[l],mi) ;
    }

    map<string,int> :: iterator it;


    for(it=mp.begin(); it!=mp.end(); it++)
    {

        if(it->second==mi)
        {
            cout << it->first ;
            break ;
        }
    }
}
