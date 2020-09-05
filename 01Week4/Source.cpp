#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){
    char text[100];
    int len;
    scanf("%s",text);
    len=strlen(text);
    for(int i=0;i<len;i++)
    {
        for(int j=len-i;j>=0;j--)
        {
            printf("  ");
        }
        for(int j = 0;j<=i;j++)
        {
            printf("%c ",text[i-j]);
        }
        for(int j = 0;j<i;j++)
        {
            printf("%c ",text[j+1]);
        }
        printf("\n");
    }
}