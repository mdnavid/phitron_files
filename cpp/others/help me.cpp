#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long a , b , n = 0 ;

    cin >> a >> b ;

    if(a>=b)cout << a - b << endl ;

    else
    {
        while(a<b)
        {
            if(b%2)b++ ;
            else b /= 2 ;
            n++ ;
        }
        cout << n+(a-b) << endl ;
    }

}
