#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x)) ;

using namespace std ;

int value[209][109] ;
int dp[209][109] ;
int n ;

int rock_climbing(int r, int c)
{
    int p1 = 0 ;
    if(dp[r][c]!=-1)
        return dp[r][c] ;

    if(r<n-1 && c>=0 && c<n)
    {
        p1 = max(p1, rock_climbing(r+1,c) + value[r][c]);
        p1 = max(p1, rock_climbing(r+1,c+1) + value[r][c]) ;

        return dp[r][c] = p1 ;
    }
    else if(r>=n-1 && r<(2*n)-1 && c>=0 && c<n)
    {
         p1 = max(p1, rock_climbing(r+1,c) + value[r][c]);
        p1 = max(p1, rock_climbing(r+1,c-1) + value[r][c]) ;
        return dp[r][c] = p1 ;
    }
    else
        return 0 ;
}

int main()
{

    int test, t = 1 ;

    cin >> test ;

    while(t<=test)
    {
        cout << "Case " << t++ << ": " ;
        mem(value,0) ;

        cin >> n ;

        for(int i=0 ; i<2*n ; i++)
        {
            if(i<n)
                for(int j=0 ; j<=i ; j++)
                    cin >> value[i][j] ;
            else
                for(int j=0 ; j<(2*n)-i-1 ; j++)
                    cin >> value[i][j] ;
        }
        mem(dp,-1) ;

        cout << rock_climbing(0,0) << endl ;
    }

}
