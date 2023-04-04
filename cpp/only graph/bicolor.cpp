#include<bits/stdc++.h>
#define MX 209
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX], color[MX] ;
vector<int>adj[MX] ;

bool BFS()
{
    queue<int>q ;

    color[0] = 1 ;

    q.push(0) ;

    while(!q.empty())
    {
        int a = q.front() ;
        q.pop() ;

        for(auto b : adj[a])
        {
            if(color[b]==0)
            {
                color[b] = 1 - color[a] ;
                q.push(b) ;
            }
            else if(color[a]==color[b])
                return 0 ;
        }
    }
    return 1 ;
}

int main()
{

    int node, edge ;

    while(cin >> node && node!=0)
    {
        cin >> edge ;
        for(int i=0 ; i<edge ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
            adj[b].pb(a) ;
        }
        mem(color,0) ;
        if(BFS())
            cout << "BICOLORABLE." << endl ;
        else cout << "NOT BICOLORABLE." << endl ;

        Clear(adj) ;

    }

    return 0 ;

}
