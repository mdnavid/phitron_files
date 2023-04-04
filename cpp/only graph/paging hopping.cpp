#include<bits/stdc++.h>
#define MX 109
#define INF 1000009

using namespace std ;

int adj[MX][MX] ;

void fun()
{

    for(int i=0 ; i<=MX ; i++)
    {
        for(int j=0 ; j<=MX ; j++)
        {
            if(i==j)
                adj[i][j] = 0 ;
            else
                adj[i][j] = INF ;
        }
    }

}

void flyed_warshall()
{

    for(int k=1 ; k<=MX ; k++)
    {

        for(int i=1 ; i<=MX ; i++)
        {
            for(int j=1 ; j<=MX ; j++)
                adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]) ;
        }

    }

}

int main()
{

    int fa, fb, a, b , j = 1 ;

    while(cin >> fa >> fb )
    {

        if(fa==0&&fb==0)break ;
        cout << fa << " " << fb << endl ;
        fun() ;
        double sum = 0.0, count = 0 ;

        adj[fa][fb] = 1 ;

        while(cin >> a >> b && a|b)
            adj[a][b] = 1 ;

        flyed_warshall() ;

        for(int i=1 ; i<=MX ; i++)
        {
            for(int j=1 ; j<=MX ; j++)
            {
                if(adj[i][j]<INF && adj[i][j])
                {
                    sum += (double)adj[i][j] ;
                    count ++ ;
                }
            }
        }
        printf("Case %d: average length between pages = %0.3f clicks\n",j,sum/count) ;
        j++ ;
    }
    return 0 ;
}
