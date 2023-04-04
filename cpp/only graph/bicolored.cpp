#include<bits/stdc++.h>
#define MX 209
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

int vis[MX] ;
vector<int>adj[MX] ;

bool BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    q.push(s) ;

    while(!q.empty())
    {

        int a, b ;

        a = q.front() ;
        q.pop() ;

        for(auto b : adj[a])
        {

            if(vis[b]==0)
            {
                vis[b] = 1 - vis[a] ;
                q.push(b) ;
            }
            else if(vis[b]==vis[a])return 0 ;
        }

    }
    return 1 ;
}

int main()
{

    int node ;

    while(cin >> node&&node!=0)
    {
        int edge ;

        cin >> edge ;

        for(int i=0 ; i<edge ; i++)
        {
            int a , b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
            adj[b].pb(a) ;
        }
        mem(vis,0) ;

        cout << BFS(0) ;

        if(BFS(0))cout << "BICOLORABLE." << endl ;
        else cout << "NOT BICOLORABLE." << endl ;

        Clear(adj) ;
    }

}
