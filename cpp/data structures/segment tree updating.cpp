#include<bits/stdc++.h>
#define MX 100009

using namespace std ;

int arr[MX] ;
int tree[MX*3] ;

void segment(int node, int start, int last)
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

int segment_sum(int node, int first, int last, int i, int j)
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

void segment_update(int node, int first, int last, int i, int newvalue)
{
    if(last<i || first>i)
        return ;
    if(first>=i && last<=i)
    {
        tree[node] = newvalue ;
        return ;
    }
    int left = (node*2) ;
    int right = (node*2) + 1 ;
    int mid = (first+last) / 2 ;
    segment_update(left,first,mid,i,newvalue) ;
    segment_update(right,mid+1,last,i,newvalue) ;

    tree[node] = tree[left] + tree[right] ;
}

int main()
{
    int n, query ;

    scanf("%d",&n) ;

    for(int i=1 ; i<=n ; i++)
        scanf("%d",&arr[i]) ;
    segment(1,1,n) ;

    scanf("%d",&query) ;

    for(int i=0 ; i<query ; i++)
    {
        string work ;

        cin >> work ;

        if(work=="sum")
        {
            int b, e ;
            scanf("%d%d",&b,&e) ;
            printf("%d\n",segment_sum(1,1,n,b,e)) ;
        }
        else if(work=="update")
        {
            int index, change ;
            scanf("%d%d",&index,&change) ;
            segment_update(1,1,n,index,change) ;
        }
    }
}
