#include<bits/stdc++.h>
#define MX 100009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool visited[MX] ;
vector<long long int>adj[MX] ;
map<long long int,long long int>mp ;
long long int level[MX] ;

void DFS(int u,int v)
{
    visited[v] = 1 ;

    for(auto q : adj[v])
    {
        if(!visited[q])
        {
            visited[q] = 1 ;
            DFS(v,q) ;
            mp[v] += 1 + mp[q] ;
        }
    }
}

void BFS(int u)
{

    queue<int>q ;

    visited[u] = 1 ;
    level[u] = 0 ;
    q.push(u) ;

    while(!q.empty())
    {
        u = q.front() ;
        q.pop() ;

        for(int i=0 ; i<adj[u].size() ; i++)
        {
            int v = adj[u][i] ;

            if(visited[v]==0)
            {
                visited[v] = 1 ;
                level[v] = level[u] + 1 ;
                q.push(v) ;
            }
        }
    }
}

int main()
{
    //freopen("output.txt","w",stdout) ;

    int test, cas = 1 ;

    scanf("%d",&test) ;

    while(test--)
    {
        printf("Case %d: ",cas++) ;

        long long int cards ;

        scanf("%lld",&cards) ;

        for(int i=0 ; i<cards-1 ; i++)
        {
            long long int u, v ;
            scanf("%lld%lld",&u,&v) ;
            adj[u].push_back(v) ;
            adj[v].push_back(u) ;
        }
        mem(visited,0) ;
        mem(level,0) ;
        BFS(1) ;
        long long int ans  = 0 ;
        mem(visited,0) ;
        DFS(0,1) ;

        for(int i=1 ; i<=cards ; i++)
            ans += abs((level[i]+mp[i])-(cards-1)) ;
        printf("%lld %lld\n",cards-1,ans/2) ;
        Clear(adj) ;
        mp.clear() ;
    }
}
