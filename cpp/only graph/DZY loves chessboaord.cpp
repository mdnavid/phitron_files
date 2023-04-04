#include<bits/stdc++.h>
#define MX 109
#define mem(x,y) memset(x,y,sizeof(x)) ;
#define pii pair<int,int>

using namespace std ;

int dx[] = {-1, 0, 0, 1} ;
int dy[] = {0, 1, -1, 0} ;
bool vis[MX][MX] ;
int level[MX][MX], row, column ;
char grid[MX][MX], print[MX][MX] ;

bool valid(int x, int y)
{

    if(x>=0 && x<row && y>=0 && y<column)
        return true ;
    return false ;

}

void bfs(int x,int y)
{

    queue<pii>q;
    q.push(pii(x,y)) ;

    if(grid[0][0]=='-')
        print[0][0] = '-' ;
    else
        print[0][0] = 'B' ;

    vis[0][0] = 1 ;

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

            if(!vis[vx][vy] && valid(vx,vy))
            {
                vis[vx][vy] = 1 ;
                q.push(pii(vx,vy)) ;
                if(grid[vx][vy]=='-')
                    print[vx][vy] = '-' ;
                else if(print[x][y]=='B')
                    print[vx][vy] = 'W' ;
                else if(print[x][y]=='W')
                    print[vx][vy] = 'B' ;
                else
                    print[vx][vy] = 'B' ;
            }

        }
    }

}

int main()
{


    cin  >> column >> row ;

    getchar() ;

    int sx, sy ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
            cin >> grid[i][j] ;
        getchar() ;
    }

    mem(vis,0) ;

    bfs(0,0) ;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
            cout << print[i][j] ;
        cout << endl ;
    }

}
