#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , k , ans = 0 ;

    cin >> n >> k ;

    if((n*2)%k==0)
        ans = ans + (n*2)/k ;
    else
        ans = ans + ((n*2)/k)+1 ;
    if((n*5)%k==0)
        ans = ans + (n*5)/k ;
    else
        ans = ans + ((n*5)/k)+1 ;
    if((n*8)%k==0)
        ans = ans + (n*8)/k ;
    else
        ans = ans + ((n*8)/k)+1 ;

    cout << ans << endl;
}
