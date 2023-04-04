#include<stdio.h>
#include<math.h>
int main()
{

    float testcase , range , ratio , sum ;

    float power ;

    scanf("%f",&testcase) ;

    while(testcase--)
    {
        scanf("%f %f",&range,&ratio) ;

        power = (pow(range,ratio)) ;

        //printf("%f",power) ;

        sum=( range*(power) / (range-1));

        printf("%d\n",(int)sum) ;
    }

}
