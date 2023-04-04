#include<bits/stdc++.h>

using namespace std ;

bool prime[50] ;
int index = 0, lis[50] ;

void f()
{
    for(int i=1 ; i<50 ; i++)
    {
        for(int j=sqrt(i) ; j>1 ; j--)
        {
            if(i%j==0)
            {
                prime[i] = 0 ;
                break ;
            }
        }
    }
}

int main()
{

    memset(prime,1,sizeof(prime)) ;

    f() ;
    int index = 0 ;

    for(int i=1 ; i<=50 ; i++)
    {
        if(prime[i]==1)
            lis[i] = ++index ;
    }

    int a, b ;

    cin >> a >> b ;

    if(lis[a]==lis[b]-1)
        cout << "YES\n" ;
    else
        cout << "NO\n" ;

}
