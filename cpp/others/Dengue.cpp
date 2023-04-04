#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long number, sum = 0 ;
    char c ;

    while(scanf("%lld%c",&number,&c)==2)
    {
        sum = sum + number ;
        if(c==10)break ;
    }

    cout << sum << endl ;

}
