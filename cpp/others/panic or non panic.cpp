#include<stdio.h>

int main()
{
    g(1) ;
    printf("%d",g());

}

void g(int i)
{
    int a = 1 ;

    if(i>5) return 0  ;
    //printf("%d ",i) ;
    g(i+1) ;
    a = a* i ;
    //g(i+2) ;
    //return a ;
}
