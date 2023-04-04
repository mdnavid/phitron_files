#include<bits/stdc++.h>
#define MX 109
#define mem(x,y) memset(x,y,sizeof(x)) ;
#define pii pair<int,int>

using namespace std ;

int dx[] = {-1, 0, 0, 1} ;
int dy[] = {0, 1, -1, 0} ;
bool vis[MX][MX] ;
int level[MX][MX], row, column ;
char grid[MX][MX] ;

bool valid(int x, int y)
{

    if(x>=0 && x<row && y>=0 && y<column)
        return true ;
    return false ;

}

int bfs(int x,int y)
{

    int w = 0 ;

    queue<pii>q;
    q.push(pii(x,y)) ;

    while(!q.empty())
    {

        pii top=q.front();
        q.pop() ;
        x=top.first ;
        y=top.second ;

        for(int i=0 ; i<4 ; i++)
        {

            int vx = x + dx[i] ;
            int vy = y + dy[i] ;


            if(valid(vx, vy) && !vis[vx][vy] && grid[vx][vy]!='#')
            {

                w++ ;
                vis[vx][vy] = 1 ;
                q.push(pii(vx,vy)) ;

            }
        }
    }

    return w ;

}

int main()
{

    /*freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;*/

    cin  >> column >> row ;

    getchar() ;

    int sx, sy ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cin >> grid[i][j] ;
            if(grid[i][j]=='@')
            {
                sx = i ;
                sy = j ;
            }
        }
        getchar() ;
    }

    mem(vis,0) ;
    mem(level,0) ;

}
