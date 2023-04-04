#include<stdio.h>

int array[10] ;

int t(int a)
{

    int digit ;
    do
    {
        digit = a % 10 ;
        a = a / 10 ;
        array[digit]++ ;
    }while(a!=0) ;

}

int main()
{

    int range1 , range2 , digit , i , mx , l ;

    while(scanf("%d%d",&range1,&range2)==2&&range1||range2)
    {

		mx = 0 ;
		l = 0 ;

        for(i=0 ; i<10 ; i++)array[i] = 0 ;

        while(range1<=range2)
        {
            t(range1) ;
            range1 ++ ;
        }

        for(i=0 ; i<10 ; i++){
        	{
        		if(mx<array[i]) 
        		{mx = array[i] ;
        		l = i ;
        		}
	       	}
        

    }
    printf("%d\n",l) ;
}


}

