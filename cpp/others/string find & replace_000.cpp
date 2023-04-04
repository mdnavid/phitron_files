#include<stdio.h>

int main()
{

    long long int testcase , umin , min , uhour , hour , uday , day , umonth , month , year ;
    clrscr() ;
    scanf("%lld",&testcase) ;

    while(testcase--)
    {

        scanf("%lld",&umin) ;

        min = umin % 60 ;
        uhour = umin / 60 ;
        hour = uhour % 24 ;
        uday = uhour / 24 ;
        day = uday % 30 ;
        umonth = uday / 30 ;
        month = umonth % 12 ;
        year = umonth / 12 ;

        printf("Year: %lld Month: %lld Day: %lld Hour: %lld Min: %lld\n",year,month,day,hour,min) ;

    }

}
