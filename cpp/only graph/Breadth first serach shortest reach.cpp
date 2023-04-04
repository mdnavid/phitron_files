#include<bits/stdc++.h>

#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;

int BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    int count = 1 ;
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
                count++ ;
                q.push(b) ;
            }
        }

    }
    return count ;
}

int main()
{

    int node, edge, flag = 1 ;

    cin >> node >> edge ;

    for(int i=0 ; i<edge ; i++)
    {

        int a, b ;

        cin >> a >> b ;

        adj[a].pb(b) ;
        adj[b].pb(a) ;

    }

    for(int i=1 ; i<=node ; i++)
    {
        mem(vis,0) ;
        //cout << BFS(i) ;
        if(BFS(i)!=node)
        {
            flag = 0 ;
            break ;
        }
    }
    if(flag==1)cout << "yes" << endl ;
    else cout << "no" << endl ;
}
