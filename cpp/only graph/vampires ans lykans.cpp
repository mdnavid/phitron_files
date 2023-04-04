#include<bits/stdc++.h>
#define MX 20009
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] , vl[MX] ;
int counv = 0 , counl = 0 ;
vector<int>adj[MX] ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    vl[s] = 1 ;
    counv++ ;
    q.push(s) ;

    while(!q.empty())
    {

        int a, b ;

        a = q.front() ;
        q.pop() ;

        for(auto b : adj[a])
        {

            if(vis[b]==0)
            {
                vis[b] = true ;
                if(vl[a]==1)
                {
                    vl[b] = 0 ;
                    counl++ ;
                }
                else if(vl[b]==0)
                {
                    vl[b] = 1 ;
                    counv++ ;
                }
                q.push(b) ;
            }
        }

    }

}

int main()
{

    int cas , j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int edge , id = 0 , finalc = 0 ;
        map<int,int>mp ;

        cin >> edge ;

        for(int i=0 ; i<edge ; i++)
        {

            int a , b ;
            cin >> a >> b ;
            if(mp[a]==0)
                mp[a] = ++id ;
            if(mp[b]==0)
                mp[b] = ++id ;
            adj[mp[a]].pb(mp[b]) ;
            adj[mp[b]].pb(mp[a]) ;
            //cout << mp[a] << " " << mp[b] << endl ;

        }
        //cout << mp.size() << endl ;
        mem(vis,0) ;
        mem(vl,0) ;
        for(int i=1 ; i<=mp.size() ; i++)
        {
            if(vis[i]==0)
            {
                BFS(i) ;
               // cout << counl << " " << counv << endl ;
                int add = max(counl,counv) ;
                finalc = finalc + add ;
                counv = counl = 0 ;
            }
        }

        printf("Case %d: %d\n",j,finalc) ;

        Clear(adj) ;

        j++ ;

    }

}


