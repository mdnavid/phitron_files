#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int cas ;

    cin >> cas ;

    while(cas--)
    {
        cin >> s ;
        getchar() ;

        if(s.size()<10)
            cout << s << endl ;
        else
        {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl ;
        }

    }

}
