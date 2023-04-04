#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , cas , j = 1;

    cin >> cas ;

    while(j<=cas)
    {

         cin >> n ;

         if(n%9==0)cout << "Case " << j << ": " << n + (n / 9)-1 << " " <<n + (n / 9) << endl ;
         else cout << "Case " << j << ": " <<  n + (n / 9) << endl ;

         j++ ;

    }



}
