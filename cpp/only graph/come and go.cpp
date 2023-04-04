#include<bits/stdc++.h>

#define MX 2008
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int  howmany  ;
vector<int>adj[MX] ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    ++howmany ;
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
                vis[b] = 1 ;
                ++howmany ;
                q.push(b) ;
            }
        }

    }

}

int main()
{

    int node, edge ;

    while(cin >> node >> edge && node!=0&&edge!=0)
    {

        int flag = 1 ;
        for(int i=0 ; i<edge ; i++)
        {
            int a, b, no;
            cin >> a >> b >> no;

            if(no==1)
                adj[a].pb(b) ;
            if(no==2)
            {
                adj[a].pb(b) ;
                adj[b].pb(a) ;
            }
        }
        for(int i=1 ; i<=node ; i++)
        {
            mem(vis,0) ;
            howmany = 0 ;
            BFS(i) ;
            if(howmany!=node)
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag == 1)
            cout << "1" << endl ;
        else if(flag == 0)
            cout << "0" << endl ;
        Clear(adj) ;
    }

}
