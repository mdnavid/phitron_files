#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
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

        for(int i=0 ; i<adj[a].size() ; i++)
        {
            b = adj[a][i] ;
            if(vis[b]==1)
                return 0 ;
            else if(vis[b]==0)
            {
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }
    return 1 ;
}

int main()
{


    int node, edge ;

    cin >> node >> edge ;

    for(int i=0 ; i<edge ; i++)
    {

        int a, b ;

        cin >> a >> b ;

        adj[a].pb(b) ;
    }
    mem(vis,0) ;
    if(node!=edge+1)
        cout << "NO" << endl ;

    else
    {
        bool p = BFS(1) ;
        if(p==0)
            cout << "NO" << endl ;
        else
        {
            for(int i=1 ; i<=node ; i++)
            {
                if(vis[i]!=1)
                {
                    cout << "NO" << endl ;
                    return 0 ;
                }
            }
            cout << "YES" << endl ;
        }
    }

}
