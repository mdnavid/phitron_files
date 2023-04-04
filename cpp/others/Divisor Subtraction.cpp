#include<bits/stdc++.h>

using namespace std ;

long long int will(long long int number)
{

    for(long long int i=3 ; i<=sqrt(number) ; i+=2)
    {
        if(number%i==0)return i ;
    }
    return number ;
}

bool prime(long long int a)
{

    for(int i=2 ; i<=sqrt(a) ; i++)
    {
        if(a%i==0)
            return 0 ;
    }
    return 1 ;
}

int main()
{

    long long a ;

    cin >> a ;

    if(a%2==0)cout << a / 2 << endl ;
    else if(prime(a)==1)cout << "1" << endl ;
    else
    {
        long long int d = will(a) ;
        a = a - d ;
        cout << (a/2) + 1 << endl ;
    }

}
