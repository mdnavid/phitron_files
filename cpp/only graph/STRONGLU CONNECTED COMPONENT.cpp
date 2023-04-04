#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj1[MX], adj2[MX], top, to_print ;
int destinaton ;


void DFS1(int s)
{

    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj1[s].size() ; i++)
    {
        u = adj1[s][i] ;
        if(!vis[u])
            DFS1(u) ;
    }
    top.push_back(s) ;
}

void DFS2(int s)
{
    to_print.pb(s) ;
    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj2[s].size() ; i++)
    {
        u = adj2[s][i] ;
        if(!vis[u])
            DFS2(u) ;
    }

}
int main()
{

    int node, edge, coun = 0 ;

    cin >> node >> edge ;

    for(int i=0 ; i<edge ; i++)
    {

        int a, b ;

        cin >> a >> b ;

        adj1[a].pb(b) ;
        adj2[b].pb(a) ;

    }

    mem(vis,0) ;
    for(int i=1 ; i<=node ; i++)
        if(!vis[i])
            DFS1(i) ;
    reverse(top.begin(),top.end()) ;
    mem(vis,0) ;
    for(int i=0 ; i<top.size() ; i++)
    {
        if(vis[top[i]]==0)
        {
            coun++ ;
            DFS2(top[i]) ;
            for(int i=0 ; i<to_print.size() ; i++)cout << to_print[i] << " " ;
            cout << endl ;
            to_print.clear() ;
        }
    }

    cout << coun << endl ;

}
