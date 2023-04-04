#include<stdio.h>

int main()
{
    char a;
    printf("ENTER ANY ALPHBATE TO CHECK: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='B'||a=='C'||a=='D'||a=='E')
        printf("THE ALPHBATE IS VOWEL");
    else
        printf("THE ALPHBATE IS CONSONANT");
    return 0;
}





