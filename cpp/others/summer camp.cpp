#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;

    int n = 1 ;

    while(s.size()<=1000)
    {

        ostringstream ss ;

        ss << n ;

        s = s + ss.str() ;

        n++ ;

    }

    int y ;

    cin >> y ;

    cout << s[y-1] << endl ;


}

