#include<bits/stdc++.h>

using namespace std ;

#define Max 100009

long long int a[100009] ;

void sieve()
{

    long long int i,j ;
    a[0] = a[1] = 0;



    for(i=4; i<=Max; i=i+2)
        a[i]=0;
    for(i=3; i*i<=Max; i+=1)
    {
        if(a[i])
        {
            for(j=i*i; j<=Max; j+=i)
                a[j] = 0;
        }

    }
}
int main()
{

    long long int i, number, c ;

    for(i=0; i<=Max; i++)
        a[i]=1;

    double store ;

    sieve();

    cin >> c ;

    for(long long int q=0 ; q<c ; q++)
    {

        cin >> number ;

        store = sqrt(number) ;

        if(a[(long long int)store]&&(((double)store)-(long long int)store)==0)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;

    }

}



