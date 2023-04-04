#include<bits/stdc++.h>

using namespace std ;

map<pair<int,int>,int>mp ;

void need(int m)
{

    //cout << "I'm in" << endl ;


    int a = 2, b = 0 ;

    while(a<=m&&b<=m-2)
    {
        mp[make_pair(a,b)] = 1 ;
        //mp[make_pair(b,a)] = 1 ;
        a++ ;
        b++ ;
    }
    //cout << "I'm out" << endl ;
    map<pair<int,int>,int> :: iterator it;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        int x, y ;
        x = it->first.first ;
        y = it->first.second ;
        //cout << "I'm in" << endl ;
        cout << x << " " << y << endl ;
        do
        {
            cout << "I'm in" << endl ;
            mp[make_pair(x,y++)] = 1 ;
            cout << x << " " << y << endl ;
            cout << "I'm out" << endl ;
        }while(mp[make_pair(x,y)]!=1);
    }
    mp[make_pair(0,2)] = 1 ;
    mp[make_pair(2,0)] = 1 ;
    mp[make_pair(1,1)] = 1 ;
   // cout << "I'm out" << endl ;
}

int main()
{

    int m, querry ;

    cin >> m;

    need(m) ;

    cin >> querry ;

    while(querry--)
    {
        int c, d ;
        cin >> c >> d ;
        if(mp[make_pair(c,d)]==1)
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }

    return 0 ;

}
