#include<stdio.h>

int main()
{

    int  ns , mod , divide , k ;

    while(scanf("%d%d",&ns,&k)==2)
    {

        int sum = ns ;

        while(ns/k!=0&&k>1)
        {
            mod = ns%k ;
            divide = ns/k ;
            sum = sum + divide ;
            ns = mod + divide ;
        }

        printf("%d\n",sum) ;

    }

    return 0 ;

}
