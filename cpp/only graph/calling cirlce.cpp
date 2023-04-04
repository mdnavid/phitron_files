#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
vector<int>adj1[MX], adj2[MX], top, to_print ;
map<string,int>si ;
map<int,string>is ;
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

    int node, edge, coun = 0, cas = 0 ;

    freopen("input.txt","r",stdin) ;

    while(cin >> node >> edge && edge|node)
    {
        if(cas)
            cout << endl ;
        printf("Calling circles for data set %d:\n",++cas) ;

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
            adj1[si[a]].pb(si[b]) ;
            adj2[si[b]].pb(si[a]) ;
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
                for(int i=0 ; i<to_print.size() ; i++)
                {
                    if(i==to_print.size()-1)
                        cout << is[to_print[i]] << endl ;
                    else
                        cout << is[to_print[i]] << ", " ;
                }
                to_print.clear() ;
            }
        }
        is.clear() ;
        si.clear() ;
        Clear(adj1) ;
        Clear(adj2) ;
        top.clear() ;
    }

}

