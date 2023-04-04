#include<bits/stdc++.h>

#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int level[MX] ;
vector<int>adj[MX] ;

void BFS(int s)
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
                level[b] = level[a] + 6 ;
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }

}

int main()
{

    int cas ;

    cin >> cas ;

    while(cas--)
    {
        int node , edge , source ;

        cin >> node >> edge ;

        for(int i=0 ; i<edge ; i++)
        {
            int a , b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
            adj[b].pb(a) ;
        }
        cin >> source ;
        mem(vis,0) ;
        BFS(source) ;

        for(int i=1 ; i<=node ; i++)
        {
            if(i==source)continue ;
            if(vis[i]==0)cout << "-1 " ;
            else cout << level[i] << " " ;
        }
        cout << endl ;
        Clear(adj) ;
    }

}
