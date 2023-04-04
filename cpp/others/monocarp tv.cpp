#include<bits/stdc++.h>

using namespace std ;

long long int gcd(long long int a,long long int b)
{

    if(b==0)
        return a ;
    else
        return gcd(b,a%b) ;

}

int main()
{

    long long int a , b , x , y ;

    cin >> a >> b >> x >> y ;

    long long int gc = gcd(x,y) ;

    x = x / gc ;
    y = y / gc ;

    cout << min(a/x,b/y) << endl ;

}
