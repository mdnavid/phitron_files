#include<stdio.h>

int main()
{

    int a[10000], i, flag[10000],f,cas,size;

    scanf("%d",&cas) ;

    while(cas--)
    {

        scanf("%d",&size) ;
        for(i=0 ; i<size ; i++){
            scanf("%d",&a[i]) ;
            if(i!=0)flag[i] = 0;

        }

        for(i=1; i<size; i++)
        {
            flag[a[i]-a[i-1]] = 1;
        }
        f=1;

        for(i=1; i<size; i++)
        {
            if(flag[i]==0)
            {
                f=0;
                break;
            }
        }

        if(f)printf("Jolly\n");
 /       else printf("Not jolly\n");
    }

}
