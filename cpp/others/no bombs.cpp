#include<bits/stdc++.h>
#define MAX 1009
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

bool vis[MAX][MAX];
int level[MAX][MAX], row, column , grid[MAX][MAX] ;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

int BFS(int x, int y,int ex,int ey)
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

        for(int i=0; i<4 ; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !vis[vx][vy]&&grid[vx][vy]!=-1)
            {
                level[vx][vy]=level[x][y]+1;
                vis[vx][vy]=1;
                q.push(pii(vx,vy));
                if(vx==ex&&vy==ey)return level[vx][vy] ;
            }

        }
    }
    return 0;
}

int main()
{



    while(cin >> row >> column && row!=0&&column)
    {


        mem(vis,0) ;
        mem(grid,0) ;

        int numberofrowscontainingbomb , sourcer , sourcec , destr , destc ;
        cin >> numberofrowscontainingbomb ;
        while(numberofrowscontainingbomb--)
        {
            int r , numberofbomb ;
            cin >> r >> numberofbomb ;
            while(numberofbomb--)
            {
                int c ;
                cin >> c ;
                grid[r][c] = -1 ;
            }
        }

        cin >> sourcer >> sourcec >> destr >> destc ;
        int ans = BFS(sourcer,sourcec,destr,destc) ;

        cout << ans << endl ;

    }

}


