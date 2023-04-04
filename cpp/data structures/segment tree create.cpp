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

int main()
{
    int n ;

    scanf("%d",&n) ;

    for(int i=0 ; i<n ; i++)
        scanf("%d",&arr[i]) ;
    segment(1,1,n) ;
}
