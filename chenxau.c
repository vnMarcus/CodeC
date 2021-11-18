#include <stdio.h>
#include <string.h>
int main (){
    char s1[200];
    char s2[200];
    int p;
    gets(s1);
    gets(s2);
    scanf("%d", &p);
    for(int i = 0; i < p - 1; i ++)                         printf("%c", s1[i]);
    for (int i = 0; i < strlen(s2); i ++ )              printf("%c", s2[i]);
    for (int i = p - 1;i < strlen(s1); i ++)                printf("%c", s1[i]);
}