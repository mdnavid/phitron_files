#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int n ;

    while(cin >> n)
    {
        long long int last = (n/2) + n*(n-(n/2)) ;

        cout << (3*last) - 6 << endl ;
    }
    return 0 ;
}
