#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas , x1 , x2  , y1 , y2 , noc , xx1 , yy1 , j = 1 ;
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    cin >> cas ;

    while(j<=cas)
    {

        cin >> x1 >> y1 >> x2 >> y2 >> noc ;

        cout << "Case " << j << ":" << endl ;

        while(noc--)
        {

            cin >> xx1 >> yy1 ;

            if(xx1>x1&&xx1<x2&&yy1>y1&&yy1<y2)cout << "Yes" << endl ;
            else cout << "No" << endl ;

        }

        j++ ;

    }

}
