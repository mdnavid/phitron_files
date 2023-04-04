#include<bits/stdc++.h>
#define MX 50009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)adj[i].clear()
#define pii pair<int,int>
#define INF INT_MAX

using namespace std ;

vector<pii>adj[MX] ;

int dijkstra(int source, int destination)
{
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
                q.push({cost[d],d}) ;
            }
        }
    }
    return cost[destination] ;
}

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        int node, edge ;

        cin >> node >> edge ;

        for(int i=0 ; i<edge ; i++)
        {
            int source, destination, cost ;
            cin >> source >> destination >> cost ;
            adj[source].push_back(make_pair(destination,cost)) ;
        }

        int source, destination ;
        cin >> source >> destination ;

        cout << dijkstra(source,destination) << endl ;

    }

    return 0 ;

}
