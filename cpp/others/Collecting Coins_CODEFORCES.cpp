#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    for(int i=0 ; i<test ; i++)
    {

        long long int a[2] , n ;

        cin >> a[0] >> a[1] >> a[2] >> n ;

        sort(a,a+3) ;

        if((n-(a[2]-a[1] + a[2]-a[0]))%3==0 && (n-(a[2]-a[1] + a[2]-a[0]))>=0)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;

    }

    return 0 ;

}
