#include<bits/stdc++.h>
#define MAX 109
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {0,1,1,1,0,-1,-1,-1};
int dy[] = {1,1,0,-1,-1,-1,0,1};

char grid[MAX][MAX] ;
bool vis[MAX][MAX];
int level[MAX][MAX], oxygen, row, column ;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

int BFS(int x, int y)
{
    level[x][y]=0;
    vis[x][y] = 1 ;

    queue<pii>q;
    q.push(pii(x,y));

    while(!q.empty())
    {
        pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

        for(int i=0; i<8; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !vis[vx][vy]&&grid[vx][vy]!='#')
            {
                level[vx][vy]=level[x][y]+1;
                vis[vx][vy]=1;
                q.push(pii(vx,vy));
                if(grid[vx][vy]=='T')
                {
                    if(oxygen>=level[vx][vy])return 1 ;
                    else return 0 ;
                }
            }

        }
    }
    return 0;
}

int main()
{

    int cas ;
    cin >> cas ;

    while(cas--)
    {
        int sx, sy ;
        cin >> oxygen >> row >> column ;
        getchar() ;
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<column ; j++)
            {
                scanf("%c",&grid[i][j]) ;
                if(grid[i][j]=='S')
                {
                    sx = i ;
                    sy = j ;
                }
            }
            getchar() ;
        }
        mem(vis,0) ;
        if(BFS(sx,sy))cout << "Possible" << endl ;
        else cout << "Impossible" << endl ;
    }

}

