#include<bits/stdc++.h>
#define MAX 109
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;


int dx[] = {-1,0,0};
int dy[] = {0,1,-1};

int row, column, id = -1 ;
char ch[] = "IEHOVA#", grid[MAX][MAX] ;
vector<string>to_print ;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

void dfs(int ux, int uy)
{
    ++id;
    for(int i=0; i<3; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && grid[vx][vy]==ch[id])
        {
            if(i==0)
                to_print.push_back("forth") ;
            else if(i==1)
                to_print.push_back("right") ;
            else if(i==2)
                to_print.push_back("left") ;
            //cout<<ch[id]<<" "<<dx[i]<<" "<<dy[i]<<" " <<vx<< " "<<vy<<endl;
            if(grid[vx][vy]=='#')
                return;
            dfs(vx, vy);
        }
    }

}

int main()
{


    int cas ;
    cin >> cas ;

    while(cas--)
    {
        int sx, sy ;
        cin >>  row >> column ;
        getchar() ;
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<column ; j++)
            {
                scanf("%c",&grid[i][j]) ;
                if(grid[i][j]=='@')
                {
                    sx = i ;
                    sy = j ;
                }
            }
            getchar() ;
        }
        dfs(sx,sy) ;

        for(int i=0 ; i<to_print.size() ; i++)
        {
            if(i!=to_print.size()-1)cout << to_print[i] << " " ;
            else cout << to_print[i] << endl ;
        }

        to_print.clear() ;

        id = -1 ;

    }

}


