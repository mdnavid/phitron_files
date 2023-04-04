#include<bits/stdc++.h>

using namespace std ;

int main()
{

    set<int>s ;

    int n , k ;

    cin >> n >> k ;

    for(int i=0 ; i<n ; i++)
    {

        int number ;

        cin >> number ;

        s.insert(number) ;

    }

    int cas = 1 ;

    while(cas<=k)
    {

        int y = *s.begin() ;
        s.erase(s.begin()) ;

        cout << y << " " ;

        cas++ ;

    }

    cout << endl ;

}
