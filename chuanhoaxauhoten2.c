#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t --){
        char s[200];
        gets(s);
        int n = strlen(s);
        for (int i = 0; i < n; i ++)    s[i] = tolower(s[i]);
        char *p = strtok(s, " ");
        char res[100][100];
        int n1 = 0;
        while (p != NULL){
            p[0] = toupper(p[0]);
            for (int i = 1; i < strlen(p); i ++)
                p[i] = towlower(p[i]);
            strcpy(res[n1 ++], p);
            p = strtok(NULL, " ");
        }
        for (int i = 1; i < n1 - 1; i ++)       printf("%s ", res[i]);
        printf("%s,", res[n1 - 1]);
        for (int i = 0; i < strlen(res[0]); i ++)       res[0][i] = towupper(res[0][i]);
        printf(" %s", res[0]);
        printf("\n");
    }
}