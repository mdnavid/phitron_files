#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a,b,c,d,e,f ;

    cin >> a >> b >> c >> d >> e >> f ;

    int ans = 0 ;

    if(a<d)
        ans = d - a + ans ;
    if(b<e)
        ans = e - b + ans ;
    if(c<f)
        ans = f - c + ans ;

    cout << ans << endl ;

}
