#include<bits/stdc++.h>
#define MX 30009
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj[MX] ;
int destinaton ;

void DFS(int s)
{

    int u ;
    vis[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(!vis[u])DFS(u) ;
    }

}


int main()
{


        int node ;

        cin >> node >> destinaton ;

        for(int i=1 ; i<=node-1 ; i++)
        {
            int a , c ;
            cin >> a ;
            c = i + a ;
            adj[a].pb(c) ;
        }

        DFS(1) ;

        //for(int i=1 ; i<=node ; i++)cout << vis[i] << endl ;

        if(vis[destinaton]==1)cout << "YES" << endl ;
        else cout << "NO" << endl ;

}


