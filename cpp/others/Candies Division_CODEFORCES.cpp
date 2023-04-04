#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {
        long long int candy , kids ;

        cin >> candy >> kids ;

        long long int ans = candy - (candy % kids) ;

        ans = ans + min(candy % kids , kids / 2) ;

        cout << ans << endl ;

    }

    return 0 ;

}
