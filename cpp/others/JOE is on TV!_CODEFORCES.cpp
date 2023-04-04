#include<bits/stdc++.h>

using namespace std ;

int main()
{

    double number , ans = 0.0 ;

    cin >> number ;

    for(int i=(int)number ; i>0 ; i--)
    {
        ans = ans + (1.0/(double)i) ;

    }
    printf("%.12f\n",ans) ;
}
