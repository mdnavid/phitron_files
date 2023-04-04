#include<bits/stdc++.h>

#define MX  50009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;
int level[MX][MX] ;

int BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    int count = 1 ;
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
                count++ ;
                q.push(b) ;
            }
        }

    }
    return count ;
}

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        int node, edge ;

        cin >> node >> edge ;

        for(int i=0 ; i<n-1 ; i++)
        {
            int u, v, c ;
            cin >> u >> v >> c ;
            level[u][v] = c ;
            adj[u].pb(v) ;
            adj[v].pb(u) ;
        }

    }

}
