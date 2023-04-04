#include<bits/stdc++.h>
#define MX 159
#define mem(x,y) memset(x,y,sizeof(x))

using namespace std ;

int dx[] = {-1,+1} , level[MX] ;
int forbid ;
string sr , dt , temp ;
bool visited[MX] ;

struct input
{
    string a , b , c ;
};
bool valid(int x,int k, input str[])
{
    if(visited[x]==1 || x<97 || x>122)
        return 0 ;
    temp[k] = (char)x ;

    for(int i=0 ; i<forbid ; i++)
    {
       int f1 = str[i].a.find(temp[0]) ;
       int f2 = str[i].b.find(temp[1]) ;
       int f3 = str[i].c.find(temp[2]) ;

       if(f1!=-1 && f2!=-1 && f3!=-1)
            return 0 ;
    }
    return 1 ;
}

void BFS(int u,int k, input str[])
{
    visited[u] = 1 ;
    level[u] = 0 ;

    queue<int>q ;
    q.push(u) ;

    while(!q.empty())
    {
        u = q.front() ;
        q.pop() ;

        for(int i=0 ; i<2 ; i++)
        {
            int v = u + dx[i] ;

            if(u==97 && i==0)
                v = 122 ;
            if(u==122 && i==1)
                v = 97 ;

            if(valid(v,k,str))
            {
                visited[v] = 1 ;
                level[v] = level[u] + 1 ;
                if(v==(int)dt[k])
                    return ;
                q.push(v) ;
            }
        }
    }
}

int main()
{

    //freopen("output.txt","w",stdout) ;

    int test , j = 1 ;

    scanf("%d",&test) ;

    while(test--)
    {
        cin >> sr >> dt >> forbid ;

        input str[forbid] ;
        temp = sr ;
        int ans = 0 ;

        for(int i=0 ; i<forbid ; i++)
            cin >> str[i].a >> str[i].b  >> str[i].c  ;
        for(int i=0 ; i<3 ; i++)
        {
            mem(visited,0) ;
            mem(level,0) ;
            BFS((int)sr[i],i,str) ;
            if(visited[(int)dt[i]]==0)
            {
                ans = -1 ;
                break ;
            }
            temp[i] = dt[i] ;
            ans += level[(int)dt[i]] ;
        }
        printf("Case %d: %d\n",j++,ans) ;
    }

}
