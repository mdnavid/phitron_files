#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int test , a , b , k ;

    cin >> test ;

    while(test--)
    {

        cin >> a >> b >> k ;

        long long int ans1 , ans2 ;

        if(k%2==0)
        {
            ans1 = (k/2) * a ;
            ans2 = (k/2) * b ;
        }
        else
        {
            ans1 = ((k/2) + 1) * a ;
            ans2 = (k/2) * b ;
        }

        cout << ans1 - ans2 << endl ;

    }

}
