#include<bits/stdc++.h>
#define MX 10000
#define mem(x,y) memset(x,y,sizeof(x))
#define Clear(x) for(int i=0 ; i<=MX ; i++)x[i].clear() ;
#define pb(x) push_back(x)

using namespace std ;

bool prime[MX] ;
map<string,int>level , vis;
vector<int>adj[MX] ;
vector<string>vs ;

void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=MX; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=MX; i += p)
                prime[i] = false;
        }
    }

}

int BFS(string u)
{

    queue<string>q ;

    vis[u] = 1 ;
    level[u] = 0 ;
    q.push(u) ;

    while(!q.empty())
    {

        string a, b ;

        a = q.front() ;
        q.pop() ;

        for(int i=0 ; i<a.size() ; i++)
        {
            b = a ;
            for(char j='0' ; j<='9' ; j++)
            {
                if(i==0&&j=='0')
                    continue ;
                b[i] = j ;
                stringstream ss(b) ;
                int n ;
                ss >> n ;
                //cout << n << endl ;
                if(prime[n]==true&&!vis[b])
                {
                    //5cout << n << endl ;
                    level[b] = level[a] + 1 ;
                    vis[b] = true ;
                    q.push(b) ;
                }
            }
        }

    }

}

int main()
{

    int cas ;

    cin >> cas ;

    SieveOfEratosthenes() ;

    while(cas--)
    {

        vis.clear() ;
        level.clear() ;

        string a , des ;

        cin >> a >> des ;

        BFS(a) ;

        cout << level[des] << endl ;

    }

}
