#include<bits/stdc++.h>
#define MAX 109
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {2,1,-1,-2,-2,-1,1,2};

bool vis[MAX][MAX];
int level[MAX][MAX], oxygen, row, column ;

bool valid(int x, int y)
{
    if(x>=0 && x<8 && y>=0 && y<8)
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

        for(int i=0; i<8; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !vis[vx][vy])
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

    int source , dest , neededmoves ;
    char sourcec , destc ;

    while(cin >> sourcec >> source >> destc >> dest)
    {

        mem(vis,0) ;

        neededmoves = BFS(source-1,sourcec-'a',dest-1,destc-'a') ;

        printf("To get from %c%d to %c%d takes %d knight moves.\n",sourcec,source,destc,dest,neededmoves) ;

    }

}


