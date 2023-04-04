#include<bits/stdc++.h>
#define MX 100009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)
#define pii pair<int,int>
#define INF INT_MAX

using namespace std ;

vector<pii>adj[MX] ;
vector<int>dis ;
int parent[MX] ;
bool vis[MX] ;

void path(int source , int des)
{

    vector<int>path ;

    for(int i=des ; i!=-1 ; i=parent[i])
        path.pb(i) ;

    reverse(path.begin(),path.end()) ;

    for(int i=0 ; i<path.size() ; i++)
        cout << path[i] << " " ;

    cout << endl ;

}

int dijkstra(int s , int des)
{

    priority_queue<pii,vector<pii>,greater<pii> >q ;

    dis[s] = 0 ;
    q.push({0,s}) ;
    parent[s] = -1 ;

    while(!q.empty())
    {

        int u = q.top().second ;
        q.pop() ;

        vis[u] = 1 ;

        for(auto i : adj[u])
        {

            int w = i.second ;
            int v = i.first ;

            if(dis[u]+w<dis[v] && !vis[v])
            {
                dis[v] = dis[u] + w ;
                parent[v] = u ;
                q.push({dis[v],v}) ;
            }

        }

    }

    if(dis[des]==INF)
        return -1 ;
    return dis[des] ;

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
    dis.assign(node+1,INF) ;

    int ans = dijkstra(1,node) ;

    if(ans==-1)
        cout << "-1" << endl ;
    else
        path(1,node) ;

    Clear(adj) ;

}
