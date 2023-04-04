#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    cin >> n ;

    int ans = __builtin_popcount(n) ;

    cout << ans << endl ;

    long long h ;
    cin >> h ;
    long long p = __builtin_popcountll(h) ;

    cout << p << endl ;

}
