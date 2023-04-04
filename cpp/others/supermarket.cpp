#include<bits/stdc++.h>

using namespace std ;

int main()
{

   double number , nop , a , b , mi , o ;

    cin >> number >> nop ;

    cin >> a >> b ;

    mi = a/b*nop ;

    for(int i=1 ; i<number ; i++)
    {
        cin >> a >> b ;
        mi = min(a/b*nop,mi) ;
    }

    printf("%0.8lf\n",mi) ;

}
