#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)
#define pii pair<int,int>
#define INF INT_MAX

using namespace std ;

vector<pii>adj[MX] ;
int parent[MX] ;
bool vis[MX] ;

void path(int s, int des)
{

    vector<int>path ;

    for(int v=des ; v!=-1 ; v=parent[v])
        path.pb(v) ;

    reverse(path.begin(),path.end()) ;

    for(int i=0 ; i<path.size() ; i++)
        cout << path[i] << " " ;
    cout << endl ;

}

int dijstrak(int source, int dest)
{

    priority_queue<pii, vector<pii>, greater<pii>>q ;

    vector<int>cost(MX,INF) ;

    cost[source] = 0 ;
    parent[source] = -1 ;
    q.push({0,source}) ;

    while(!q.empty())
    {

        int u = q.top().second ;
        q.pop() ;

        vis[u] = 1 ;

        for(auto n : adj[u])
        {
            int v = n.first ;
            int w = n.second ;
            if(cost[u]+w<cost[v]&&!vis[v])
            {
                cost[v] = cost[u] + w ;
                q.push({cost[v],v}) ;
                parent[v] = u ;
            }
        }

    }
    if(cost[dest]==INF)
        return -1 ;
    return 0 ;

}

int main()
{


    int node, edge ;


    cin >> node >> edge ;

    for(int i=0 ; i<edge ; i++)
    {
        int a, b, c ;
        cin >> a >> b >> c ;
        adj[a].push_back({b,c}) ;
        adj[b].push_back({a,c}) ;
    }

    mem(vis,0) ;

    int ans = dijstrak(1,node) ;

    if(ans==-1)
        cout << "-1" << endl ;
    else
        path(1,node) ;

    Clear(adj) ;

}
