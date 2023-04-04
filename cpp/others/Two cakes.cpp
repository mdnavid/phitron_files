#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<int,int>mp1 ;
    map<int,int>mp2 ;

    long long int n , dis1 = 0 , dis2 = 0 , now = 1 ;

    cin >> n ;

    for(int i=1 ; i<=(2*n) ; i++)
    {

        int a ;

        cin >> a ;

        if(mp1[a]==0)
            mp1[a] = i ;
        else
            mp2[a] = i ;

    }

    for(int i=1 ; i<=n ; i++)
    {
        dis1 = dis1 + abs(mp1[i]-now) ;
        now = mp1[i] ;
    }

    now = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        dis2 = dis2 + abs(mp2[i]-now) ;
        now = mp2[i] ;
    }

    cout << dis1 + dis2 << endl ;

}
