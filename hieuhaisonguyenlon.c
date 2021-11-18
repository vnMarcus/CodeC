#include <stdio.h>
#include <string.h>

int main (){
    char s1[3000], s2[3000], s3[3000], tmp = '0';
    scanf("%s%s", &s1, &s2);
    int x = strlen(s1), y = strlen(s2);
    if (x < y)  {
        for (int i = 0; i < y - x; i ++)    strcat(s3,"0");
        strcat(s3,s1);
        strcpy(s1, s3);
        
    }
    if (x > y) {
        for (int i=0;i<x-y;i++)             strcat(s3,"0");
        strcat(s3,s2);
        strcpy(s2,s3);    
    }
    if (strcmp(s1,s2) < 0){
        strcpy(s3, s1);
        strcpy(s1, s2);
        strcpy(s2, s3);
    }
    x = strlen(s1);
    for (int i = x - 1; i >= 0; i --){
        if (s1[i] - )
    }
}