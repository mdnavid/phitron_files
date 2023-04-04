#include<bits/stdc++.h>

using namespace std ;


int main()
{
    int n , k , p , cas , i , j ,ans ;

    cin >> cas ;

    for(int i=1; i<=cas; i++)
    {

        cin >> n >> k >> p ;
        ans = k ;
        for(j=1; j<=p; j++)
        {
            if(ans==n)ans=1;
            else ans=ans+1;
        }


        cout << "Case " << i << ": " << ans << endl ;

    }
}

