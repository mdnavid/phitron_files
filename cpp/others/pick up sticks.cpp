#include<bits/stdc++.h>

#define MX 100002




#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

vector<int>adj[MX], top ;

int main()
{

    int node, edge, indegre[MX] ;

    while(cin >> node >> edge && node|edge)
    {
        mem(indegre,0) ;

        for(int i=0 ; i<edge ; i++)
        {

            int a, b ;

            cin >> a >> b ;

            indegre[b]++ ;

            adj[a].pb(b) ;
            adj[b].pb(a) ;

        }

        set<int>s ;

        for(int i=1 ; i<=node ; i++)
            if(indegre[i]==0)
                s.insert(i) ;

        int u, v ;

        while(!s.empty())
        {

            u = *s.begin() ;
            s.erase(s.begin()) ;
            top.pb(u) ;
            for(auto v:adj[u])
            {
                indegre[v]-- ;
                if(!indegre[v])
                    s.insert(v) ;
            }
        }

        if(top.size()!=node)
            cout << "IMPOSSIBLE" << endl ;
        else
        {
            for(int i=0 ; i<top.size() ; i++)
                cout << top[i] << endl ;
        }
        Clear(adj) ;
        top.clear() ;
    }

}

