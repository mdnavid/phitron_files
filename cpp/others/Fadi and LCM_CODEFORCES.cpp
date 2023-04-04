#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int number, a, b , aa = LONG_MAX , bb = LONG_MAX ;

    cin >> number ;

    if(number<=3)
    {
        cout << "1 " << number << endl ;
        return 0 ;
    }
    int p ;

//    cout << (double)(sqrt(number))<< endl << (int)sqrt(number) << endl ;

    if((double)(sqrt(number))==(int)sqrt(number))
        p = sqrt(number) - 1 ;
    else
        p = number/2 ;

    for(int i=p ; i>=1 ; i--)
    {
        if(number%i==0)
        {
            a = i ;
            b= number / i ;
            if(max(a,b)<max(aa,bb))
            {
                aa = a ;
                bb = b ;
            }
        }
    }

    cout << aa << " " << bb << endl ;

}
