#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, k, a, due = 0, ans, v ;

    cin >> n >> k ;

    for(int i=1 ; i<=n ; i++)
    {

        cin >> a ;

        if(k<=0)
            continue ;

        v = a + due ;

        if(v<8)
        {
            k -= v ;
            due = 0 ;
        }
        else if(v>=8)
        {
            k -= 8 ;
            due = v - 8 ;
        }
        ans = i ;
    }

    if(k<=0)
        cout << ans << endl ;
    else
        cout << "-1" << endl ;

    return 0 ;

}


