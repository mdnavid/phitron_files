#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int n , q , x , y , ans ;

    cin >> n >> q ;

    while(q--)
    {

        cin >> x >> y ;

        if(x%2(((n+1)/2*(n+1)/2))+(n/2*n/2))&&y%2)ans = (x/2)*n + (y+1)/2 ;
        else if(x%2&&y%2==0)ans = (x/2) * (n/2) + (x/2)*((n+1)/2) + ((n+1)/2) * ((n+1)/2) + (n/2) * (n/2) + y/2 ;

        else if(x%2==0&&y%2)ans = ((y+1)/2) + ((x/2)*(n/2)) + ((n+1)/2)*((n+1)/2)+((n/2)*(n/2)) + (((x-1)/2)*((n+1)/2)) ;
        else ans = ((x/2*(n+1)/2)+ ((x-1)/2 *n/2+y/2)) ;

        cout << ans << endl ;

    }

}
