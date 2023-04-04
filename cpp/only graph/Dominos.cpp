#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX], top ;
int destinaton ;


void DFS1(int s)
{

    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(!vis[u])
            DFS1(u) ;
    }
    top.push_back(s) ;
}

void DFS2(int s)
{

    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(!vis[u])
            DFS2(u) ;
    }

}

int main()
{

    int cas , qq = 0;

    cin >> cas ;

    while(qq<cas)
    {

        int node, edge, ans = 0 ;

        cin >> node >> edge ;

        while(edge--)
        {
            int m, n ;
            cin >>  m >> n ;
            adj[m].pb(n) ;
        }
        mem(vis,0) ;
        for(int i=1 ; i<=node ; i++)
            if(!vis[i])
                DFS1(i) ;
        reverse(top.begin(),top.end()) ;
        /*for(int i=0 ; i<top.size() ; i++)
            cout << top[i] << " " ;
        cout << endl;*/
        mem(vis,0) ;
        for(int i=0 ; i<node ; i++)
        {
            if(!vis[top[i]])
            {
                DFS2(top[i]);
                ans++ ;
            }
        }
        printf("Case %d: %d\n",++qq,ans) ;
        Clear(adj)
        top.clear() ;
    }

}

