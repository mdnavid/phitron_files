#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas ;

    cin >> cas ;

    while(cas--)
    {
        string s ;
        cin >> s ;
        getchar() ;
        if(s=="one"||s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e'||s[0]=='o'&&s[1]=='n')cout << 1 << endl ;
        else if(s=="two"||s[0]=='t'&&s[2]=='o'||s[1]=='w'&&s[2]=='o'||s[0]=='t'&&s[1]=='w')cout << 2 << endl ;
        else cout << 3 << endl ;
    }

}
