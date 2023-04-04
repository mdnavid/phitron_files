#include<bits/stdc++.h>
#define MAX 2509
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MAX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

vector<int>adj[MAX] ;
bool vis[MAX] ;
int level[MAX] , mx = 0 , boom ;
map<int,int>how_many ;

void BFS(int s)
{

    queue<int>q ;

    vis[s] = 1 ;
    how_many[0] = 1 ;
    level[s] = 1 ;
    q.push(s) ;

    while(!q.empty())
    {

        int a , b ;

        a = q.front() ;
        q.pop() ;

        for(auto b: adj[a])
        {
            if(vis[b]==0)
            {
                level[b] = level[a] + 1 ;
                how_many[level[b]]++ ;
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }

}

void check()
{

    map<int,int> :: iterator it;

    for(it=how_many.begin(); it!=how_many.end(); it++)
    {
       if(it->second>mx)
       {
           mx = it->second ;
           boom = it->first + 1 ;
       }
    }

    return ;

}

int main()
{

    int node ;

    while(cin >> node)
    {

        for(int i=0 ; i<node ; i++)
        {

            int n_o_friends ;

            cin >> n_o_friends ;

            for(int j=0 ; j<n_o_friends ; j++)
            {

                int a ;

                cin >> a ;

                adj[j].push_back(a) ;

            }

        }

        int querry ;

        cin >> querry ;

        for(int i=0 ; i<querry ; i++)
        {

            int source_node ;

            cin >> source_node ;

            mem(vis,0) ;
            BFS(source_node) ;
            check() ;

            cout << mx << " " << boom << endl ;

            mx = 0 ;
            boom = 0 ;
            how_many.clear() ;

        }

        Clear(adj) ;

    }

}
