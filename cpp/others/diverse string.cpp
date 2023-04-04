#include<bits/stdc++.h>

using namespace std ;

int main()
{

    char a , b , ansa , ansb ;
    int n , f = 0 ;

    cin >> n ;

    getchar() ;

    cin >> a ;

    for(int i=1 ; i<n ; i++)
    {
        cin >> b ;
        if(b!=a && f==0)
        {
            ansa = a ;
            ansb = b ;
            f = 1 ;
        }
        a = b ;
    }

    if(f==0)cout << "NO" << endl ;
    else cout << "YES" << endl << ansa << ansb << endl ;
}
