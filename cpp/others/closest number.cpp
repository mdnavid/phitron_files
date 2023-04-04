#include<stdio.h>

int main(){
char a[10000];
int i,j,k=0,count=0;
scanf("%[^\n]",a);
i=strlen(a);
for(j=0;j<=i;j++){
        if(k!=1&&(a[j]==' ' || a[j]=='\0'))  {
            count++;
            k=1;
        }
        else if(a[j]!=' '){
            k=0;
        }
    }

printf("%d",count);
}
