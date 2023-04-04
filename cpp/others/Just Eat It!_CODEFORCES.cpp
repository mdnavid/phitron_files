#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {
        long long int n, sum = 0, check = 0, flag = 1 , positive = 0 ;

        cin >> n ;

        long long int a[n] ;

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i] ;
            if(a[i]>=0)
                positive++ ;
            sum += a[i] ;
        }
        //cout << sum << endl ;
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]>=0)
                check += a[i] ;
            else
            {
                //cout << check << endl ;
                if(check>=sum)
                {
                    flag = 0 ;
                    break ;
                }
                check = 0 ;
            }
        }
        if(positive==n || positive==0)
            cout << "YES\n" ;
        else if(flag && check<sum)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}
