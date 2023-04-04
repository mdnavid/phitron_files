#include <bits/stdc++.h>

using namespace std ;

bool prime(long long int sum)
{

    long long int k ;
    bool flag = 1 ;

    k = sqrt(sum) ;

    for(long long int i=2 ; i<=k ; i++)
    {
        if(sum%i==0)
        {
            flag = 0 ;
            break ;
        }
    }

    return flag ;

}

int main()
{

    int cas ;
    long long int a , b ;

    cin >> cas ;

    while(cas--)
    {

        long long int sum ;

        cin >> a >> b ;

        sum = (a+b)*(a-b) ;

        cout << sum << endl ;

        if(prime(sum)==1)cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }

}

