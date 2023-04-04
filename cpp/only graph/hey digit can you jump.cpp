#include<bits/stdc++.h>

#define MX 10009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int level[MX] , dest , t = 0 ;
vector<int>adj[MX] , v ;
map<int,int>mp ;

void to_keep()
{

    for(int i=0 ; i<v.size() ; i++)
    {

        //adj[v[i]].pb(v[i]) ;
        if(mp[v[i]-1]==1)
            adj[v[i]].pb(v[i]-1) ;
        if(mp[v[i]+1]==1)
            adj[v[i]].pb(v[i]+1) ;

    }

}

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    level[s] = 0 ;
    q.push(s) ;

    while(!q.empty())
    {

        int a, b ;

        a = q.front() ;
        q.pop() ;

        for(int i=0 ; i<adj[a].size() ; i++)
        {
            b = adj[a][i] ;
            if(b==dest)t-- ;
            if(vis[b]==0)
            {
                vis[b] = 1 ;
                level[b] = level[a] + 1 ;
                q.push(b) ;
            }
            else if(b==dest)
            level[b] = level[a] + 1 ;
        }

    }

}

int main()
{

    string s ;
    int source ;

    cin >> s ;

    source = s[0] - '0' ;
    dest = s[s.size()-1] - '0' ;


    for(int i=0 ; i<s.size() ; i++)
    {

        int number ;

        number = s[i] - '0' ;

        if(number==dest)t++ ;

        if(mp[number]==0)
        {
            mp[number] = 1 ;
            v.push_back(number) ;
        }

    }

    mem(vis,0) ;

    to_keep() ;

    BFS(source) ;

    cout << level[dest] - 1 << endl ;

}
