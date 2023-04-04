#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, flag = 1 ;

    map<char, int>mp ;

    getchar() ;

    for(int i=0 ; i<n ; i++)
    {

        char f ;

        cin >> f ;

        mp[f]++ ;

    }

    map<char,int>  :: iterator it ;

    if(mp.size()!=n)
        flag = 0 ;

    else
    {
        for(it=mp.begin() ; it!=mp.end() ; it++)
        {

            if(it->second!=n)
            {
                flag = 0 ;
                break ;
            }

        }
    }
    string p ;
    if(flag)
    {
        for(it=mp.begin() ; it!=mp.end() ; it++)
        {

            p = p + it->first ;
        }
    }

    if(flag==0)
    {
        for(int i=0 ; i<n-1 ; i++)p = p + p ;
    }

    cout << p << endl;

}
