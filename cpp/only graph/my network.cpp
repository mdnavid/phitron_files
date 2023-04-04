#include<bits/stdc++.h>
#define MX 109

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

    int n ;

    while(cin >> n && n!=0)
    {

        need() ;

        int source, connect, from, coun = 0 ;
        char c ;

        while(cin >> source && source!=0)
        {
            from = source ;
            while(scanf("%d%c",&connect,&c))
            {
                adj[source].push_back(connect) ;
                adj[connect].push_back(source) ;
                if(c==10)
                    break ;
            }
        }

        dfs(from) ;

        for(int i=1 ; i<=n ; i++)
            if(ap[i]==true)
                coun++ ;

        cout << coun << endl ;

    }

}
