#include<stdio.h>

int main()
{
    int a,b,c,d,sum=1;
    scanf("%d",&a);
    for(b=2;b<=sqrt(a);b++){
        c=a%b;
        d=a/b;
        if(c==0&&b!=d){
            sum=sum+(b+d);
        }
    }
    if(sum==a)
        printf("the number is perfect");
   else
        printf("the number is not perfect");
}
