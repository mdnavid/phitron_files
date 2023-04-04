#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int cards , first , second , fl = 0 ;

        cin >> cards >> first >> second ;

        for(int i=0 ; i<first ; i++)
        {
            int a ;
            cin >> a ;
            if(a==cards)
                fl = 1 ;
        }
        for(int i=0 ; i<second ; i++)
        {
            int a ;
            cin >> a ;
        }
        if(fl)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    return  0 ;
}
