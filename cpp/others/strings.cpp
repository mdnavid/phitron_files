4#include<stdio.h>
#include<math.h>

int main()
{
   float a,c=0,d,e,x;
    float  b=0;
    int n,f;
//b[0]=0;
    scanf("%d",&n);
    f=n;
    while(n!=0)
    {
        x=n%10;
        b=b+pow(x,3);
//printf("%f",b);
        n=n/10;
//c++;
    }
    if(f==b)
        printf("positive");
    else
        printf("negative");
    return 0;
}
