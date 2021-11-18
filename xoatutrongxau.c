#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int t;
    scanf("%d\n", &t);
    for (int x = 1; x <= t;  x ++)
    {
        char s1[300];
    char s2[300];
    char s3[300];
    gets(s1);
    gets(s2);
    strcpy(s3, s1);
    for (int i = 0; i < strlen(s3); i ++){
        s3[i] = towlower(s3[i]);
        s2[i] = towlower(s2[i]);
    }
    int b[300];
    int n1 = 0, n2 = 0, n3 = 0;
    char res1[300][300];
    char res2[300][300];
    char res3[300][300];
    char *p = strtok(s3, " ");
    while (p != NULL){
        strcpy(res3[n3 ++], p);
        p = strtok(NULL, " ");
    }
    p = strtok(s2, " ");
    while (p != NULL){
        strcpy(res2[n2 ++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < n3; i ++){
        b[i] = 1;
    }
    for (int i = 0; i < n3; i ++){
        for (int j = 0; j < n2; j ++){
            if (strcmp(res3[i], res2[j]) == 0)
                b[i] = 0;
        }
    }
    p = strtok(s1, " ");
    while (p != NULL){
        strcpy(res1[n1 ++], p);
        p = strtok(NULL, " ");
    }
    printf("Test %d: ", x);
    for (int i = 0; i < n3; i ++){
        if (b[i] == 1)
            printf("%s ", res1[i]);
    }
    printf("\n");
    }
    
}