#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int number , stopage , sum = 0 , w , n , ans ;

    cin >> n >> w ;

    int a[n] ;

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i] >> number ;

        if(a[i]==1)
        {
            stopage = i ;
            sum = sum + number ;
        }
        else
        {
            if(w<=sum)ans = stopage ;
            sum = 0 ;
        }
    }

    cout << ans ;

}
