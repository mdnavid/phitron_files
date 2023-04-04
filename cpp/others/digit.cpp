#include<bits/stdc++.h>

using namespace std ;

map<int,int>mp ;
int a[100] ;

digit(int n)
{
    while(n>0)
    {
        mp[n%10]++ ;
        n /= 10 ;
    }
}
void coun()
{

    for(int i=1 ; i<=100 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
            digit(j) ;
        int mx = 0, id = 0 ;
        for(int j=1 ; j<10 ; j++)
        {
            if(mx<=mp[j])
            {
                mx = mp[j] ;
                id = j ;
            }
        }
        a[i] = id ;
        mp.clear() ;
    }

}
int main()
{
    coun() ;
    string s ;
    int ans = 10 , n ;

    cin >> s ;

    for(int i=0 ; i<s.size()-1 ; i++)
    {
        char ar[3] ;
        ar[0] = s[i] ;
        ar[1] = s[i+1] ;
        n = atoi(ar) ;
        if(n)ans = min(ans,a[n]) ;
    }
    cout << ans ;
}
