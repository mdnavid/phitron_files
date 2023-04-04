#include<bits/stdc++.h>

#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int parent[MX] ;
vector<int>adj[MX] ;
map<string, int>si ;
map<int, string>is ;

void path(int s, int des)
{

    vector<int>path ;

    for(int v=des ; v!=-1 ; v=parent[v])
        path.pb(v) ;

    reverse(path.begin(),path.end()) ;

    for(int i=1 ; i<path.size() ; i++)
        cout << is[parent[path[i]]] << " " << is[path[i]] << endl ;

}

bool BFS(int s,int des)
{

    queue<int>q ;

    vis[s] = 1 ;
    parent[s] = -1 ;
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
                parent[b] = a ;
                vis[b] = 1 ;
                q.push(b) ;
                if(b==des)
                    return 1 ;
            }
        }

    }

    return 0 ;

}

int main()
{


    int edge, cas = 0 ;

    while(cin >> edge)
    {

        if(cas>0)cout << endl ;
        cas++ ;


        int q = 0 ;

        for(int i=0 ; i<edge ; i++)
        {
            string a, b ;
            cin >> a >> b ;
            if(si[a]==0)
            {
                si[a] = ++q ;
                is[q] = a ;
            }
            if(si[b]==0)
            {
                si[b] = ++q ;
                is[q] = b ;
            }
            adj[si[a]].pb(si[b]) ;
            adj[si[b]].pb(si[a]) ;
        }

        string source, des ;
        cin >> source >> des ;
        getchar() ;
        mem(vis,0) ;
        bool ans = BFS(si[source],si[des]) ;

        if(ans==1)
            path(si[source],si[des]) ;
        else
            cout << "No route" << endl ;

        Clear(adj) ;
        si.clear() ;
        is.clear() ;


    }

}
