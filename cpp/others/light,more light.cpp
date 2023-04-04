#include<stdio.h>

int main()
{
    char a[100],k,c;
    int n,m,count,l,o,check[100];
    scanf("%[^\n]",&a);
    n=strlen(a);
    for(m=0; m<n; m++)
    {
        count=0;
        if(a[m]!=' '&&check[a[m]-96]==1){
            continue;
        }
        check[a[m]-96] = 1;
        c=a[m];

        for(l=0; l<n; l++)
        {
            if(a[l]==c)
            {
                count++;
            }
        }
        printf("%c = %d\n",c,count);
    }
        //printf("%c = %d\n",c,count);
    }






















