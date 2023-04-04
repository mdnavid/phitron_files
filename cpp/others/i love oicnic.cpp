#include<bits/stdc++.h>

#define MX 1009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int  coun, k ;
vector<int>adj[MX] ;
map<int,int>mp ;


void DFS(int s)
{

    int u ;
    if(vis[s]==0)mp[s]++ ;
    vis[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(!vis[u])
            DFS(u) ;
    }

}

int main()
{
    int cas , j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        coun = 0 ;
        int node, edge ;
        vector<int>vl ;

        cin >> k >> node >> edge ;

        for(int i=0 ; i<k ; i++)
        {
            int z ;
            cin >> z ;
            vl.push_back(z) ;
        }
        for(int i=0 ; i<edge ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            adj[a].pb(b) ;
        }
        mem(vis,0) ;
        for(int i=0 ; i<vl.size() ; i++)
        {
            DFS(vl[i]) ;
            mem(vis,0) ;
        }
        map<int,int> :: iterator it ;
        for(it=mp.begin() ; it!=mp.end() ; it++)
        {
            if(it->second==k)coun++ ;
        }
        cout << "Case " << j << ": " << coun << endl ;
        j++ ;
        vl.clear() ;
        mp.clear() ;
        Clear(adj) ;
    }
}

