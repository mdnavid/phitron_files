#include<bits/stdc++.h>
#define MX 1005
#define INF INT_MAX;
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)

using namespace std ;

int d[MX] ;

struct Edge
{
    int u, v,w ;
} edge[MX];

bool BellmanFord(int node, int e, int source)
{

    d[source] = 0 ;

    for(int i=0 ; i<node ; i++)
    {
        for(int j=0 ; j<e ; j++)
        {
            int a = edge[j].u ;
            int b = edge[j].v ;
            int c = edge[j].w ;

            if(d[a]+c<d[b])
            {
                d[b] = d[a] + c ;
            }
        }
    }

    for(int i=0 ; i<e ; i++)
    {
        int a = edge[i].u ;
        int b = edge[i].v ;
        int c = edge[i].w ;

        if(d[a]+c<d[b])
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{

    int node, edg ;

    cin >> node >> edg ;

    for(int i=0 ; i<edg ; i++)
    {
        int a, b, c ;
        cin >> a >> b >> c ;
        edge[i].u = a ;
        edge[i].v = b ;
        edge[i].w = c ;
    }

    set(d) ;

    if(BellmanFord(node,edg,1))
        cout << "NOT NEGATIVE EDGE CIRCLE." << endl ;
    else
        cout << "THERE IS NEGATIVE EDGE CIRCLE." << endl ;

}
