#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {
        int n, swp, first, second ;

        cin >> n >> swp >> first >> second ;

        if(abs(first-second)+swp>(n-1))
            cout << n-1 << endl ;
        else
            cout << abs(first-second)+swp << endl ;
    }

}
