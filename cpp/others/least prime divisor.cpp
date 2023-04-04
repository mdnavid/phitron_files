#include<bits/stdc++.h>

using namespace std ;

int will(int number)
{

    for(int i=3 ; i<=sqrt(number) ; i+=2)
    {
        if(number%i==0)return i ;
    }
    return number ;
}

int main()
{

    int n ;

    while(cin >> n && n!=0)
    {
        cout << will(n)  << endl ;
    }

}
