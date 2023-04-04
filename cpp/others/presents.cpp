#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    cin >> n ;

    map<int,int>mp ;

    for(int i=1 ; i<=n ; i++)
    {
        int j ;
        cin >> j ;
        mp[j] = i ;
    }

    map<int,int> :: iterator it ;

    for(it=mp.begin() ; it!=mp.end() ; it++)cout << it->second << " " ;

    cout << endl ;

}
