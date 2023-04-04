#include<bits/stdc++.h>

using namespace std ;

long long int dp[109][109] ;

long long int nCr(int n, int r)
{

    if(dp[n][r]!=-1)
        return dp[n][r] ;
    if(n==r||r==0)
        return dp[n][r] = 1 ;
    if(r==1)
        return dp[n][r] = n ;

    return dp[n][r] = nCr(n-1,r-1) + nCr(n-1,r) ;

}

int main()
{

    for(int i=0 ; i<105 ; i++)
    {
        for(int j=0 ; j<105 ; j++)
            dp[i][j] = -1 ;
    }

    int n, r ;

    while(cin >> n >> r && n|r)
    {

        cout << n << " things taken " << r << " at a time is " << nCr(n,r) << " exactly." << endl ;

    }

    return 0 ;

}
