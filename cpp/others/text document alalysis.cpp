#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s , inbracket ;
    int len , stat = 0 , inside = 0 , lenth = 0 , cnt = 0 , n ;

    cin >> n >> s ;

    len = s.size() ;

    for(int i=0 ; i<len ; i++)
    {
        if(s[i]=='(')
            stat = 1 ;
        if(s[i]==')')
            stat = 0 ;
        if(stat)
            inbracket = inbracket + s[i] ;
        if(isalpha(s[i]) && !stat)
        {
            inside++ ;
        }
        else inside = 0 ;
        lenth = max(lenth,inside) ;
    }

    len = inbracket.size() ;

    for(int i=0 ; i<len ; i++)
    {
        if(!isalpha(inbracket[i]))
            inbracket[i] = ' ' ;
    }

    stringstream ss(inbracket) ;

    while(ss >> inbracket)
        cnt++ ;

    cout << lenth << " " << cnt << endl ;

    return 0 ;

}
