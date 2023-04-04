#include<bits/stdc++.h>
#define MX 29
#define mem(x,y) memset(x,y,sizeof(x))
#define pii pair<int,int>

using namespace std ;

int dx[] = {-1, 1, 0, 0} ;
int dy[] = {0, 0, -1, 1} ;

string s[MX] ;
bool vis[MX][MX] ;
int level[MX][MX], row, column ;

bool valid(int x, int y)
{
    if(x>=0&&x<row && y>=0&&y<column)
        return true ;
    return false ;
}

int bfs(int x, int y)
{

    queue<pii>q ;

    vis[x][y] = 1 ;
    level[x][y] = 0 ;
    q.push({x,y}) ;

    while(!q.empty())
    {

        pii top = q.front() ;
        q.pop() ;

        x = top.first ;
        y = top.second ;

        for(int i=0 ; i<4 ; i++)
        {

            int vx = x + dx[i] ;
            int vy = y + dy[i] ;

            if(s[vx][vy]!='m' && s[vx][vy]!='#' && valid(vx,vy) && !vis[vx][vy])
            {
                level[vx][vy] = level[x][y] + 1 ;
                vis[vx][vy] = 1 ;
                q.push({vx,vy}) ;
                if(s[vx][vy]=='h')
                    return level[vx][vy] ;
            }

        }

    }

}

int main()
{

    //freopen("output.txt","w",stdout) ;

    int cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        cout << "Case " << j << ": " ;
        j++ ;

        int ax, ay, bx, by, cx, cy ;

        cin >> row >> column ;

        for(int i=0 ; i<row ; i++)
            cin >> s[i] ;

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<column ; j++)
            {
                if(s[i][j]=='a')
                {
                    ax = i ;
                    ay = j ;
                }
                else if(s[i][j]=='b')
                {
                    bx = i ;
                    by = j ;
                }
                else if(s[i][j]=='c')
                {
                    cx = i ;
                    cy = j ;
                }
            }
        }

        mem(vis,0) ;
        mem(level,0) ;

        int a = bfs(ax,ay) ;

        mem(vis,0) ;
        mem(level,0) ;

        int b = bfs(bx,by) ;

        mem(vis,0) ;
        mem(level,0) ;

        int c = bfs(cx,cy) ;

        cout << max(max(a,b),c) << endl ;

    }

    return 0 ;

}
