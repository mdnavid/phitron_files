#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<char,int>mp ;

    int n, ans = 0 ;

    cin >> n ;

    for(int i = 0 ; i<n ; i++)
    {

        char c ;

        cin >> c ;

        mp[c] ++ ;

    }

    if(mp['L']>0 && mp['R']>0)
    {

        ans += (min(mp['L'],mp['R'])*2) ;

    }

    if(mp['D']>0 && mp['U']>0)
    {

        ans += (min(mp['U'],mp['D'])*2) ;

    }

    cout << ans << endl ;

}
