#include<bits/stdc++.h>

using namespace std ;

int main()
{

    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;

    int cas , j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int n , mx , current , a , now ;

        cin >> n >> a ;

        current = a ;
        mx = a ;

        for(int i=1 ; i<n ; i++)
        {

            cin >> a ;

            if(a>current)
            {
                int o ;
                o = a - current ;
                if(o>mx)
                    mx = o ;
                else if(o==mx-1)mx = mx + 1 ;
            }
            current = a ;
        }
        cout << "Case " << j << ": " << mx << endl ;
        j++ ;
    }

}
