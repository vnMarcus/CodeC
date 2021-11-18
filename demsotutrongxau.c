#include <stdio.h>
#include <string.h>
int main (){
    int t;
    scanf("%d\n", &t);
    while (t --)
    {
        char s1[500];
        gets(s1);
        char res[400][200];
        char *p;
        p = strtok(s1," ");
        int n1 = 0;
        while (p != NULL){
            strcpy(res[n1 ++], p);
            p = strtok(NULL, " ");
        }
        printf("%d\n", n1);
    }
    
}