#include<bits/stdc++.h>

using namespace std ;

#define MX 100009

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
    else if(b>=i&&e<=j)
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

    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;

    int test, cas = 1 ;

    scanf("%d",&test) ;

    while(cas<=test)
    {

        int n, q ;

        printf("Case %d:\n",cas) ;

        scanf("%d%d",&n,&q) ;

        for(int i=1 ; i<=n ; i++)
            scanf("%d",&a[i]) ;

        segment(1,1,n) ;

        for(int i=0 ; i<q ; i++)
        {

            int type, number1, number2 ;

            scanf("%d",&type) ;

            if(type==1)
            {
                scanf("%d",&number1) ;
                printf("%d\n",a[number1+1]) ;
                update(1,1,n,number1+1,0) ;
                a[number1+1] = 0 ;
            }
            else if(type==2)
            {
                scanf("%d%d",&number1,&number2) ;
                update(1,1,n,number1+1,a[number1+1] + number2) ;
                a[number1+1] += number2 ;
            }
            else
            {
                scanf("%d%d",&number1,&number2) ;
                printf("%d\n",querry(1,1,n,number1+1,number2+1)) ;
            }
        }

        cas++ ;

    }

}
