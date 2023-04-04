#include<bits/stdc++.h>
#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x)) ;
#define pii pair<int,int>
#define INF INT_MAX

using namespace std ;

map<string,int>mp ;
vector<pii>adj[MX] ;
bool vis[MX] ;

void faster()
{

    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

}

int dijkstra(int source, int dest)
{

    if(source==dest)
        return 0 ;

    priority_queue<pii, vector<pii>, greater<pii> >q ;

    vector<int>cost(MX,INF) ;

    cost[source] = 0 ;

    q.push({0,source}) ;

    while(!q.empty())
    {

        int u = q.top().second ;
        q.pop() ;

        for(auto i : adj[u])
        {

            int c = i.second ;
            int w = i.first ;

            if(cost[u]+c<cost[w])
            {
                cost[w] = c + cost[u] ;
                q.push({cost[w],w}) ;
            }

        }

    }

    return cost[dest] ;

}

int main()
{

    faster() ;

    int cas ;

    cin >> cas ;

    while(cas--)
    {

        int node ;

        cin >> node ;

        for(int i=1 ; i<=node ; i++)
        {

            string s ;
            int nof ;

            cin >> s >> nof ;

            mp[s] = i ;

            for(int j=0 ; j<nof ; j++)
            {

                int connect, cost ;

                cin >> connect >> cost ;

                adj[i].push_back({connect,cost}) ;
                adj[connect].push_back({i,cost}) ;

            }

        }

        int querry ;

        cin >> querry ;

        while(querry--)
        {

            string s1, s2 ;

            cin >> s1 >> s2 ;

            cout << dijkstra(mp[s1],mp[s2]) << endl ;

        }

    }

}
