#include<bits/stdc++.h>
#define MAX 59
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

char grid[MAX][MAX] ;
bool vis[MAX][MAX];
int  row, column ;
vector<pii>v[2] ;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

void BFS(int x, int y,int note)
{

    vis[x][y] = 1 ;
    v[note].push_back({x,y}) ;
    queue<pii>q;
    q.push(pii(x,y));

    while(!q.empty())
    {
        pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

        for(int i=0; i<4; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !vis[vx][vy]&&grid[vx][vy]!='1')
            {
                vis[vx][vy]=1;
                q.push(pii(vx,vy));
                v[note].push_back({vx,vy}) ;
            }

        }
    }
    return;
}

int main()
{

    int n ;

    cin >> n ;

    row = column = n ;
    int sx, sy, ex, ey ;
    cin >> sx >> sy >> ex >> ey ;

    for(int i=0 ; i<n ; i++)
    {
        scanf("%s",grid[i]) ;
    }

    BFS(sx-1,sy-1,0) ;
    BFS(ex-1,ey-1,1) ;

    long long dist = LONG_MAX ;

    cout << v[0].size() << " " << v[1].size() << endl ;

    for(int i=0 ; i<v[0].size() ; i++)
    {
        for(int j=0 ; j<v[1].size() ; j++)
        {

            long long var1 = (v[0][i].first-v[1][j].first)*(v[0][i].first-v[1][j].first) ;
            long long var2 = (v[0][i].second-v[1][j].second)*(v[0][i].second-v[1][j].second) ;
            dist = min(dist,var1+var2) ;
        }
    }

    cout << dist << endl ;

}

