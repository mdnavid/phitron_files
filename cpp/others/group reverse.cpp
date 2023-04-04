#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s, c, streo ;
    char t ;
    int numberofgroups, limit = 1 ;

    while(cin >> numberofgroups&&numberofgroups!=0)
    {

        cin >> s ;

        numberofgroups = s.size() / numberofgroups ;

        for(int i=0 ; i<s.size() ; i++)
        {
            c = c + s[i] ;
            if((i+1)%numberofgroups==0&&i!=0)
            {
                reverse(c.begin(),c.end()) ;
                streo = streo + c ;
                c.clear() ;
            }
        }

        cout << streo << endl ;

        streo.clear() ;

    }


}
