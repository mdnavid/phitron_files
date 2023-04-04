#include<bits/stdc++.h>

using namespace std ;

map<int,int>mp ;

int main()
{

   // cout << (int)'a' << (int)'z' << endl ;

    for(int i=97 ; i<=122 ; i++)
    {
        int p = i - 97 ;

        int q = 122 - p ;

        cout << (char)i << " = " << (char)q << endl ;
    }

}
