#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas , siz , j , k = 1 , n , moves ;

    cin >> cas ;

    while(k<=cas)
    {
        j = 1 ;
        moves = 0 ;
        cin >> siz ;

        while(siz--)
        {
            cin >> n ;
            if(n!=j)moves++ ;
            j++ ;
        }
 cout << "Case " << k << ":" << " " ;
        cout << moves << endl ;

    }

}
