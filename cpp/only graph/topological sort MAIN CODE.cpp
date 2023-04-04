#include<bits/stdc++.h>
#define MX 50009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)adj[i].clear()

using namespace std ;

vector<int>adj[MX], top ;
bool visited[MX] ;

void topological(int s)
{
    int u ;
    visited[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(visited[u]==0)
            topological(u) ;
    }
    top.push_back(s) ;
}

void dfs(int s)
{
    int u ;
    visited[s] = true ;

    for(int i=0 ; i<adj[s].size() ; i++)
    {
        u = adj[s][i] ;
        if(visited[u]==0)
            dfs(u) ;
    }
}

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        int node, number_of_disconnected = 0 , edge ;

        cin >> node >> edge ;

        for(int i=0 ; i<edge ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            adj[a].push_back(b) ;
        }

        mem(visited,0) ;

        for(int i=1 ; i<=node ; i++)
            if(visited[i]==0)
                topological(i) ;

        reverse(top.begin(),top.end()) ;
        mem(visited,0) ;

        for(int i=0 ; i<top.size() ; i++)
            cout << top[i] << " " ;
        cout << endl ;

        for(int i=1 ; i<=node ; i++)
        {
            if(visited[top[i]]==0)
            {
                dfs(top[i]) ;
                number_of_disconnected++ ;
            }
        }

        cout << number_of_disconnected << endl ;

        Clear(adj) ;

    }

}
