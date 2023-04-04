#include<bits/stdc++.h>
#define MX 50009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)adj[i].clear()
#define pii pair<int,int>
#define INF INT_MAX

using namespace std ;

vector<pii>adj[MX] ;
bool visited[MX] ;
vector<int>top ;

void topological(int s)
{
    int u ;
    visited[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i].first ;
        if(visited[u]==0)
            topological(u) ;
    }
    top.push_back(s) ;
}

int dijkstra(int source)
{
    int mx = 0 ;
    priority_queue<pii, vector<pii>, greater<pii>>q ;
    vector<int>cost(MX,INF) ;

    cost[source] = 0 ;
    q.push({0,source}) ;

    while(!q.empty())
    {
        int s = q.top().second ;
        q.pop() ;

        for(auto a : adj[s])
        {
            int c = a.second ;
            int d = a.first ;

            if(cost[s]+c<cost[d])
            {
                cost[d] = cost[s]  + c ;
                mx = max(mx,cost[d]) ;
                q.push({cost[d],d}) ;
            }
        }
    }
    return mx ;
}

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        int node, mx = 0 ;

        cin >> node ;

        for(int i=0 ; i<node-1 ; i++)
        {
            int source, destination, cost ;
            cin >> source >> destination >> cost ;
            adj[source].push_back(make_pair(destination,cost)) ;
            adj[destination].push_back(make_pair(source,cost)) ;
        }

        mem(visited,0) ;
        for(int i=1 ; i<=node ; i++)
        {
            if(visited[i]==0)
                topological(i) ;
        }
        reverse(top.begin(),top.end()) ;

        mem(visited,0) ;
        for(int i=1 ; i<=node ; i++)
        {
            if(visited[top[i]]==0)
                mx = max(mx,dijkstra(top[i])) ;
        }

        cout << mx << endl ;

        Clear(adj) ;

    }

    return 0 ;

}
