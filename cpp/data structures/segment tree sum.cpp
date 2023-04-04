#include<bits/stdc++.h>
#define MX 100009

using namespace std ;

int arr[MX] ;
int tree[MX*3] ;

void segment(int node , int start , int last)
{
    if(start==last)
    {
        tree[node] = arr[start] ;
        return ;
    }
    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (start+last) / 2 ;
    segment(left,start,mid) ;
    segment(right,mid+1,last) ;

    tree[node] = tree[left] + tree[right] ;
}

int segment_sum(int node , int first , int last, int i , int j)
{
    if(last<i || first>j)
        return 0 ;
    if(first>=i && last<=j)
        return tree[node] ;
    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (first+last) / 2 ;
    int p1 = segment_sum(left,first,mid,i,j) ;
    int p2 = segment_sum(right,mid+1,last,i,j) ;

    return p1 + p2 ;
}

int main()
{
    int n , query ;

    scanf("%d",&n) ;

    for(int i=1 ; i<=n ; i++)
        scanf("%d",&arr[i]) ;
    segment(1,1,n) ;

    scanf("%d",&query) ;

    for(int i=0 ; i<query ; i++)
    {
        int b , e ;
        scanf("%d%d",&b,&e) ;
        printf("%d\n",segment_sum(1,1,n,b,e)) ;
    }
}
