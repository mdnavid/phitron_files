#include<bits/stdc++.h>
#define MX 10009
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;

using namespace std ;

bool vis[MX] ;
int level[MX] ;
vector<int>adj[MX] ;

void DFS(int s)
{

    vis[s] = true ;
    for(int i=0 ; i<adj[s].size() ; i++)
    {
        int u = adj[s][i] ;
        if(!vis[u])
        {
            vis[u] = true ;
            DFS(u) ;
        }
    }

}

int main()
{

    int cas ;

    cin >> cas ;

    while(cas--)
    {
        int node , edge , source , querry , ans = 0 ;

        cin >> node >> edge >> querry ;

        for(int i=0 ; i<edge ; i++)
        {
            int a , b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
        }
        mem(vis,false) ;
        for(int i=0 ; i<querry ; i++)
        {
            int  q ;
            cin >> q ;
            DFS(q) ;
        }
        for(int i=1 ; i<=node ; i++)if(vis[i]==true)ans++ ;

        cout << ans << endl ;
        Clear(adj) ;
    }

}
