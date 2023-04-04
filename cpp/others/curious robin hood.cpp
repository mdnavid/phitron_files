#include<bits/stdc++.h>

using namespace std ;

#define MX 100009

int a[MX], tree[MX*3] ;

void init(int node, int b, int e)
{

    if(b==e)
    {
        tree[node] = a[b] ;
        return ;
    }

    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (b+e) / 2 ;

    init(left,b,mid) ;
    init(right,mid+1,e) ;

    tree[node] = tree[left] + tree[right] ;

}

int querry(int node,int b,int e,int i, int j)
{

    if(i>e||j<b)
        return 0 ;
    if(b>=i&&e<=j)
        return tree[node] ;


    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (b+e) / 2 ;

    int p1 = querry(left,b,mid,i,j) ;
    int p2 = querry(right,mid+1,e,i,j) ;

    return (p1 + p2) ;

}

void update(int node, int b, int e,int i,int newvalue)
{

    if(i>e||i<b)
        return ;
    if(b>=i&&e<=i)
    {
        tree[node] = newvalue ;
        return ;
    }

    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (b+e) / 2 ;

    update(left,b,mid,i,newvalue) ;
    update(right,mid+1,e,i,newvalue) ;

    tree[node] = tree[left] + tree[right] ;

}

int main()
{

    int cas , j = 1 , n , q ;

    cin >> cas >> n >> q ;

    cout << "Case " << j << ":" << endl ;

    for(int i=1 ; i<=n ; i++)
        cin >> a[i] ;

    init(1,1,n) ;

    for(int i=1 ; i<=q ; i++)
    {

        int Cas ;

        cin >> Cas ;

        if(Cas==1)
        {
            int q ;
            cin >> q ;
            cout << a[q+1] << endl ;
            update(1,1,n,q+1,0) ;
            a[q+1] = 0;
        }
        else if(Cas==2)
        {
            int add , b ;
            cin >> b >>add;
            update(1,1,n,b+1,a[b+1]+add) ;
            a[b+1] += add;
        }
        else
        {
            int x , b ;
            cin >> x >> b ;
            int s = querry(1,1,n,x+1,b+1) ;
            cout << s << endl ;
        }
    }
    return 0;
}
