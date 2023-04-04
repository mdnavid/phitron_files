#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string  a , b ;
    int lena , lenb , moves ;

    cin >> a >> b >> moves ;

    lena = a.size() ;
    lenb = b.size() ;

    if(lena+lenb<moves)cout << "Yes" << endl ;
    else
    {

        while(moves--)
        {
            lena = a.size() ;
            lenb = b.size() ;
            if(lena==0||lenb==0)
            {
                if(lena==0)a.push_back(b[0]) ;
                else b.push_back(a[0]) ;
                continue ;
            }
            if(lena>lenb)
            {
                a.resize(lena-1) ;
            }
            else b.resize(lenb-1) ;
        }

        if(a==b)cout << "Yes" << endl ;
        else cout << "No" << endl ;

    }

}

