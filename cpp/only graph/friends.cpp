#include<bits/stdc++.h>

#define MX 30009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

int c = 1 ;
bool vis[MX] ;
vector<int>adj[MX] ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
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
                vis[b] = 1 ;
                c++ ;
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
        int node , edge , source , mx = 0 ;

        cin >> node >> edge ;

        for(int i=0 ; i<edge ; i++)
        {
            int a , b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
            adj[b].pb(a) ;
        }
        mem(vis,0) ;

        for(int i=1 ; i<=node ; i++)
        {
            c =  1 ;
            if(!vis[i])BFS(i) ;
            mx = max(mx,c) ;
        }
        cout << mx << endl ;
        Clear(adj) ;
    }

}
