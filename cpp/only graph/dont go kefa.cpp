#include<bits/stdc++.h>

#define MX 100000
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int maxcat, coun = 0, sum[MX], cons = 0 ;
map<int,int>mp ;
map<int,int>rest ;
map<int,int>leaf ;
vector<int>adj[MX] ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    q.push(s) ;
    if(mp[s]==1)
        sum[s] = 1 ;


    while(!q.empty())
    {

        int a, b ;

        a = q.front() ;
        q.pop() ;
        if(mp[a]==0)

        {
            sum[a] = 0 ;

        }
        else if(mp[a]==1)
            sum[a] = sum[a-1] + 1 ;

        for(int i=0 ; i<adj[a].size() ; i++)
        {
            b = adj[a][i] ;
            if(mp[b]==0)
                sum[b] = 0 ;
            else if(mp[b]==1)
                sum[b] = sum[b-1] + 1 ;
            if(vis[b]==0)
            {
                vis[b] = 1 ;
                q.push(b) ;
            }
            if(leaf[b]==0&&sum[b]<=maxcat)
                coun++ ;
        }

    }

}

int main()
{

    int node ;

    cin >> node >> maxcat ;

    for(int i=1 ; i<=node ; i++)
    {
        int g ;
        cin >> g ;
        if(g==1)
            mp[i] = 1 ;
        else
            mp[i] = 0 ;
    }

    for(int i=1 ; i<=node-1 ; i++)
    {
        int a, b ;
        cin >> a >> b ;
        adj[a].pb(b) ;

        leaf[a]++ ;

    }
    mem(vis,0) ;
    BFS(1) ;

    cout << coun << endl ;

}
