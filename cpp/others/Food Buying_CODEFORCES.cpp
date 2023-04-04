#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        long long int number, sum = 0 ;

        cin >> number ;

        while(number>=10)
        {
            long long int temp = number / 10 ;
            sum += (temp*10) ;

            number = (number%10) + temp ;
        }
        cout << sum + number << endl ;
    }

}
