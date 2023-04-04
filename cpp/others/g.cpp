#include<bits/stdc++.h>
#define MX 2147483648
using namespace std ;

map<long long int,bool>mp ;

void isit()
{

    mp[1] = 1 ;

    long long int add = 1 , number = 1 ;

    while(number<MX)
    {
        number = number + add ;
        add++ ;
       // cout << number << " " ;
        mp[number] = 1 ;
    }

}

int main()
{

    isit() ;

    int test ;

    cin >> test ;

    while(test--)
    {
        long long int y ;
        cin >> y ;
        cout << mp[y] << " " ;
    }

    cout << endl;

}
