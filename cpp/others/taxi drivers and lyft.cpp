#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map< int,long long >mp1 ;
    map< int,long long >mp2 ;

    int n, m, l = 0 , coun = 1 ;

    cin >> n >> m ;

    for(int i=1 ; i<=n+m ; i++)
    {
        int a ;
        cin >> a ;
        mp1[i] = a ;
    }

    for(int i=1 ; i<=n+m ; i++)
    {
        int a ;
        cin >> a ;
        if(a==1&&mp2.size()==0)
        {
            l = i ;
            mp2[mp1[i]] = i-1 ;
        }
        else if(a==1)
        {
            mp2[mp1[i]] = i - l - 1 ;
            l = i ;
        }

    }
    map<int,long long> :: iterator it;

    for(it=mp2.begin(); it!=mp2.end(); it++)
    {
        if(coun==1||coun==mp2.size()-1)continue ;
        else
        {

        }
    }
}
