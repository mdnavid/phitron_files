#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , mx = 0 , ans , k = 0 , m = 0 ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {

        int a , b ;

        cin >> a >> b ;

        k = k + a ;
        m = m + b ;

        if(abs(k-m)>mx)
        {
            mx = abs(k-m) ;
            if(k>m)ans = 1 ;
            else ans =  2 ;
        }

    }

    cout << ans << " " << mx << endl ;

}
