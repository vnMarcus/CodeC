#include <string.h>
#include <stdio.h>
int main (){
    char s1[300];
    char s2[300];
    gets(s1);
    gets(s2);
    char res1[100][100];
    char res2[100][100];
    char *p;
    p = strtok(s1, " ");
    int n1 = 0, n2 = 0;
    while (p != NULL){
        strcpy(res1[n1 ++], p);
        p = strtok(NULL, " ");
    }
    p = strtok(s2, " ");
     while (p != NULL){
        strcpy(res2[n2 ++], p);
        p = strtok(NULL, " ");
    }
    char tmp[100];
    for (int i = 0; i <n1; i ++){
        for (int j = i + 1; j < n1; j ++){
            if (strcmp(res1[i], res1[j]) > 0){
                strcpy(tmp, res1[i]);
                strcpy(res1[i], res1[j]);
                strcpy(res1[j], tmp);
            }
        }
    }

    for (int i = 0; i < n1; i ++){
        int ckeck = 1;
        for (int j = 0; j < n2;j ++){
            if (strcmp(res1[i], res2[j]) == 0)
                ckeck = 0;
        }
        for (int j = i + 1; j < n1; j ++){
            if (strcmp(res1[i], res1[j]) == 0)
                ckeck = 0;
        }
        if (ckeck == 1){
            printf("%s ", res1[i]);
        }
    }
}