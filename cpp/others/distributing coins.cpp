#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, mx = 0 ;

    cin >> n ;

    map<int, int>mp ;

    int number ;

    for(int i=0 ; i<n ; i++)
    {
        cin >> number ;

            mp[number]++ ;
    }
    map<int , int> :: iterator it ;
    for(it=mp.begin(); it!=mp.end(); it++)mx = max(mx,it->second) ;
     if(n==mp.size())
            cout << mx << endl ;
        else
            cout << mx << endl ;
}
