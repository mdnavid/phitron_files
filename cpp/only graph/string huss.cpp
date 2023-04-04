#include<bits/stdc++.h>

#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool vis[MX] ;
int level[MX] ;
vector<int>adj[MX] ;
map<string,int>si ;
vector<string>str , vis;

void to_keep()
{

    for(int i=0 ; i<str.size() ; i++)
    {
        string a ;
        a = v[i] ;
        for(int j=0 ; j<a.size() ; j++)
        {
            for(int k='a' ; k<='z' ; k++)
            {
                a[i] = k ;
                if(si[a]!=0)
                {
                    ad
                }
            }
        }
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

            if(vis[b]==0)
            {
                level[b] = level[a] + 6 ;
                vis[b] = 1 ;
                q.push(b) ;
            }
        }

    }

}

int main()
{

    int cas , j = 0 ;

    cin >> cas ;

    while(j<cas)
    {

        string s ;
        int id = 0 ;

        while(cin >> s && s!="*")
        {

            si[s] = ++id ;
            v.push_back(s) ;

        }

        to_keep()

    }

}
