#include<bits/stdc++.h>

using namespace std ;

#define MX 1001

int a[MX], tree[MX*3] ;

void segment(int node, int b, int e)
{

    if(b==e)
    {
        tree[node] = a[b] ;
        return ;
    }

    int left = node * 2 ;
    int right = (node * 2) + 1 ;
    int mid = (b+e)/2 ;

    segment(left,b,mid) ;
    segment(right,mid+1,e) ;

    tree[node] = tree[left] + tree[right] ;

}

int querry(int node, int b, int e, int i, int j)
{

    if(i>e||j<b)
        return 0 ;
    else if(i>=b&&j<=e)
        return tree[node] ;
    int left = node * 2 ;
    int right = (node * 2) + 1 ;
    int mid = (b+e)/2 ;

    int p1 = querry(left,b,mid,i,j) ;
    int p2 = querry(right,mid+1,e,i,j) ;

    return p1 + p2 ;

}

void update(int node, int b, int e, int i, int newvalue)
{

    if(i>e||i<b)
        return  ;
    else if(b >= i && e <= i)
    {
        tree[node] = newvalue ;
        return ;
    }
    int left = node * 2 ;
    int right = (node * 2) + 1 ;
    int mid = (b+e)/2 ;

    update(left,b,mid,i,newvalue) ;
    update(right,mid+1,e,i,newvalue) ;

    tree[node] = tree[left] + tree[right] ;

}

int main()
{

    int n ;

    cin >> n ;

    for(int i=1 ; i<=n ; i++)
        cin >> a[i] ;

    segment(1,1,n) ;

}
