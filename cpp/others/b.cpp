#include<bits/stdc++.h>

using namespace std ;

int main()
{

    double a , b ;

    cin >> a >> b  ;

    if(a+0.50>b || (int)a%5!=0)
        printf("%0.2f\n",b) ;
    else
        printf("%0.2f\n",(b-a-0.50)) ;

    return 0 ;

}
