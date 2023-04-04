//Md. Navid Alam
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x)) ;

using namespace std ;

long long int a[100005] , b[100005] ;
long long int dp[100005][2] ;
long long int n ;

long long int knapsack(long long int i ,long long int flag)
{
    if(i==n)
        return 0 ;
    if(dp[i][flag]!=-1)
        return dp[i][flag] ;
    long long int p1 = 0  , p2 = 0 ;

    if(flag!=1)
        p1 = knapsack(i+1,1) + a[i];
    if(flag!=2)
        p1 = max(p1,knapsack(i+1,2)+b[i]);
    p2 = knapsack(i+1,flag) ;

    return dp[i][flag] = max(p1,p2) ;
}

int main()
{

    cin >> n ;

    for(int i=0 ; i<n ; i++)
        cin >> a[i] ;
    for(int i=0 ; i<n ; i++)
        cin >> b[i] ;

    mem(dp,-1) ;

    long long int ans = knapsack(0,0) ;

    cout << ans << endl ;

    return 0 ;

}
