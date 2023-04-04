#include <bits/stdc++.h>
using namespace std ;



void prime_factor(long long int number)
{

    while(number%2==0)
    {

        if(number!=2)
            cout << "2" << " x " ;
        else
            cout << "2" ;

        number /=2 ;

    }

    for(int i=3 ; i<=sqrt(number) ; i+=2)
    {
        while(number%i==0)
        {

            if(number!=i)
                cout << i << " x " ;
            else
                cout << i ;

            number /=i ;

        }
    }

    if(number>2)
        cout << number << endl ;
    else
        cout << endl ;

}

int main()
{

    /*freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;*/

    long long int number ;

    while(cin >> number && number)
    {
        cout << number << " = " ;

        if(number<0)
            cout << "-1 x " ;

        prime_factor(abs(number)) ;
    }

}
