#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int cas, i,  j, n, flag, lim , number ;

    cin >> cas ;

    for(i=1 ; i<=cas ; i++)
    {
        cin >> number ;
        flag = 0;
        n = 0;
        for(j=2 ; j <= number/2 ;  j *= 2)
        {
            if(number%j == 0)n = number/j;
            if(n%2 == 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)cout << "Case " << i << ":" << " " << n << " " << j << endl ;
        else  cout << "Case " << i << ":" << " " << "Impossible" << endl ;
    }

}
