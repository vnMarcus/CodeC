#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main (){
    char s[100];
    gets(s);
    int n = strlen(s);
    for (int i = 0; i < n; i ++){
        s[i] = tolower(s[i]);
    }
    char res[100][100];
    int n1 = 0;
    char *p = strtok(s, " ");
    while (p != NULL){
        strcpy(res[n1 ++], p);
        p = strtok(NULL, " ");
    }
    char email[300] = "";
    for (int i = 0; i < n1 - 1; i ++){
        printf("%c", res[i][0]);
    }
    printf("%s@ptit.edu.vn", res[n1 - 1]);
}