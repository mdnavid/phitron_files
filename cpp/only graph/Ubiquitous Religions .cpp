#include<bits/stdc++.h>

#define MX 50009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    q.push(s) ;

    while(!q.empty())
    {

        int a, b ;

        a = q.front() ;
        q.pop() ;

        for(int i=0 ; i<adj[a].size() ; i++)
        {
            b = adj[a][i] ;

            if(vis[b]==0)
            {
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }

}


int main()
{

    int node, edge , j = 1 ;

    while(cin >> node >> edge && node|edge)
    {
        int ans = 0 ;

        for(int i=0 ; i<edge ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
            adj[b].pb(a) ;
        }
        mem(vis,0) ;

        for(int i=1 ; i<=node ; i++)
        {
            if(!vis[i])
            {
                BFS(i) ;
                ans++ ;
            }
        }
        cout << "Case " << j << ": " << ans << endl ;
        j++ ;
        Clear(adj) ;
    }

}
