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
    int b[200];
    for (int i = 0; i < n1; i ++){
        b[i] = 1;
    }
    for (int i = 0; i < n1; i ++){
        if (b[i] == 1){
            for (int j = i + 1; j < n1; j ++){
                if (strcmp(res[i], res[j]) == 0){
                    b[j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n1; i ++){
        if (b[i] == 1)
            printf("%s ", res[i]);
    }
}