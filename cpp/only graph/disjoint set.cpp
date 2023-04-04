#include<bits/stdc++.h>
#define MX 5009

using namespace std ;

map<string,int>si ;
int par[MX], ran[MX] ;

void faster()
{

    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

}

void call()
{

    for(int i=0 ; i<=MX ; i++)
    {
        par[i] = i ;
        ran[i] = 1 ;
    }

}

int parent(int x)
{
    if(par[x]==x)
        return x ;
    else
        par[x] = parent(par[x]) ;
}

void link(int x,int y)
{

    if(x>y)
        ran[x] += ran[y], par[y] = x ;
    else
        ran[y] += ran[x], par[x] = y ;

}

void mak_union(int a, int b)
{

    int x = parent(a) ;
    int y = parent(b) ;

    if(x!=y)
        link(x,y) ;

}

int main()
{

    faster() ;

    int r, c ;

    while(cin >> r >> c && r|c)
    {

        call() ;

        string s, d  ;
        int id = 0, mx = 0 ;

        for(int i=0 ; i<r ; i++)
        {
            cin >> s ;
            si[s] = ++id ;
        }

        while(c--)
        {
            cin >> s >> d ;
            mak_union(si[s],si[d]) ;
        }

        for(int i=1 ; i<=r ; i++)
            mx = max(mx,ran[i]) ;

        cout << mx << endl ;

        si.clear() ;

    }

}
