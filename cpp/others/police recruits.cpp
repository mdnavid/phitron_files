#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int siz , sum = 0 , a , small = 0 ;

    cin >> siz ;

    for(int i=0 ; i<siz ; i++)
    {
        cin >> a ;
        if(a==-1)
        {
            sum++ ;
        }
        else
        {
            sum = sum - a ;
        }
        small = max(small,sum) ;

    }

    cout << small << endl ;

}
