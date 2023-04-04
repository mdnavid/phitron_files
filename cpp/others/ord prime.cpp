#include<bits/stdc++.h>
#define Max 10041
bool a[Max] = {0} ;

using namespace std ;

void sieve()
{

    int i,j ;
    a[0] = 1 ;



    for(i=4; i<=Max; i=i+2) a[i]=1;
    for(i=3; i*i<=Max; i+=1)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=Max; j+=i)a[j] = 1;
        }

    }
}

int main()
{

    sieve() ;

    string s ;
    int len = 0 ;


    while(cin >> s)
    {
        len = 0 ;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]>='a'&&s[i]<='z')len = len + (s[i]-96) ;
            else len = len + (s[i]-38) ;
        }
        if(a[len]==0)cout << "It is a prime word." << endl ;
        else if(a[len]==1)cout << "It is not a prime word." << endl ;
    }

}
