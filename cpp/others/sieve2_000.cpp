#include <bits/stdc++.h>
using namespace std ;

#define Max 1000005

bool a[1000005] ;

void sieve()
{

    a[0]=a[1]=0;

    for(int i=4; i<=Max; i=i+2)
        a[i]=0;
    for(int i=3; i*i<=Max; i+=1)
    {
        if(a[i])
            for(int j=i*i; j<=Max; j+=i)
                a[j] = 0;
    }
}
int main()
{

    int cas,c,b,k=1;
    for(int i=0; i<=Max; i++)
        a[i]=1;

    sieve();

    int number ;

    while(cin >> number&&number!=0)
    {

        for(int i=2 ; i<=number/2&&a[i]==1 ; i++)
        {
            if(a[number-i]==1)
            {
                cout << number << ":" << endl << i << " " << number-i << endl ;
                k=0;
            }
        }
        if(k!=0)cout << "NO WAY!" << endl ;
k = 1 ;
    }

}

