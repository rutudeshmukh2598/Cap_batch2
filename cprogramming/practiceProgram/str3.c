#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="hello";
    char target[30]="rutuja";
    strcat(target,source);
    printf("\n source string =%s",source);
    printf("\n target string =%s",target);
    return 0;
    }
