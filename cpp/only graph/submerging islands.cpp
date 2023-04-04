#include<bits/stdc++.h>
#define MX 10009

using namespace std ;

vector<int>adj[MX] ;
int high[MX], low[MX], parent[MX], tim ;
bool vis[MX], ap[MX] ;

void need()
{

    for(int i=0 ; i<=MX ; i++)
    {
        adj[i].clear() ;
        parent[i] = - 1 ;
        vis[i] = ap[i] = 0 ;
    }
    tim = 0 ;
}

void dfs(int u)
{

    vis[u] = 1 ;
    high[u] = low[u] = (++tim) ;
    int child = 0 ;

    for(auto v : adj[u])
    {
        if(vis[v]==false)
        {
            child ++ ;
            parent[v] = u ;
            dfs(v) ;
            low[u] = min(low[v],low[u]) ;
            if(parent[u]!=-1&&high[u]<=low[v])
                ap[u] = true ;
            else if(parent[u]==-1&&child>1)
                ap[u] = true ;
        }
        else if(parent[u]!=v)
            low[u]=min(low[u],high[v]);
    }

}

int main()
{

    int n , m ;

    while(cin >> n >> m && m|n)
    {

        need() ;

        int source, connect , coun = 0 ;

        for(int i=0 ; i<m ; i++)
        {
            int a , b ;
            cin >> a >> b ;
            adj[a].push_back(b) ;
            adj[b].push_back(a) ;
        }

        dfs(1) ;

        for(int i=1 ; i<=n ; i++)
            if(ap[i]==true)
                coun++ ;

        cout << coun << endl ;

    }

}
