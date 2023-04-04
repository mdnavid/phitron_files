#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int a , b , c = 0 ;

    cin >> a >> b ;

    while(a!=0&&b!=0)
    {

        if(b>a)
        {
            c+=b/a ;
            b = b % a ;
        }
        else
        {
            c+=a/b ;
            a = a % b ;
        }

    }

    cout << c << endl ;

}
