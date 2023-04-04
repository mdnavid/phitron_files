#include<bits/stdc++.h>

#define MX 39
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;
int TTL, des, coun ;
int level[MX] ;

void DFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    level[s] = 0 ;
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
                level[b] = level[a] + 1 ;
                if(level[b]<=TTL)
                    coun++ ;
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }
}

int main()
{

    /*freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;*/

    int edge, j = 1 ;

    while(cin >> edge && edge!=0)
    {

        map<long long,int>mp ;
        int numberofnode = 0, id = 0 ;
        for(int i=0 ; i<edge ; i++)
        {
            long long a, b ;
            cin >> a >> b ;

            if(mp[a]==0)
            {
                numberofnode++ ;
                mp[a] = ++id ;
            }
            if(mp[b]==0)
            {
                numberofnode++ ;
                mp[b] = ++id ;
            }
            adj[mp[a]].pb(mp[b]) ;
            adj[mp[b]].pb(mp[a]) ;
        }
        int source, store ;
        while(cin >> source >> TTL && source|TTL)
        {
            coun = 1 ;
            mem(vis,0) ;
            if(mp[source]==0)
                coun = 0 ;

            else DFS(mp[source]) ;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",j,numberofnode-coun,source,TTL) ;
            j++ ;
        }
        mp.clear() ;
        Clear(adj);
    }
}


