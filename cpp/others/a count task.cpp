#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        string s ;
        long long int siz, ans = 0, m = 1 ;

        cin >> s ;

        siz = s.size() ;
        ans = ans + m ;

        for(int i=1 ; i<siz ; i++)
        {
            if(s[i]==s[i-1])
                m++ ;
            else
                m = 1 ;
            ans = ans + m ;
        }

        cout << ans << endl ;

    }

}
