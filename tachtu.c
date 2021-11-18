#include <stdio.h>
#include <string.h>
int main (){
    char s1[200], s2[200];
    gets(s1);
    char res[200][200];
    char *p;
    p = strtok(s1," ");
    int n1 = 0;
    while (p != NULL){
        strcpy(res[n1 ++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n1; i ++){
            printf("%s\n", res[i]);
        
    }
}