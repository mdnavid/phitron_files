#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int m , n , a ;

    cin >> m >> n >> a ;

    long long int p , q ;

    if(m%a==0)p = m / a ;
    else p = (m / a) + 1 ;
    if(n%a==0)q = n / a ;
    else q = (n / a) + 1 ;

    cout << p * q << endl ;

}
