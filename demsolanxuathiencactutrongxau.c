#include <stdio.h>
#include <string.h>
int main (){
    char s[300];
    gets(s);
    int n = strlen(s);
    for (int i = 0; i < n; i ++){
        if (s[i] >= 'A' && s[i] <= 'Z') 
            s[i] += 32;
    }
    int n1 = 0;
    char res[200][200];
    char *p = strtok(s, " ");
    while (p != NULL){
        strcpy(res[n1 ++], p);
        p = strtok(NULL, " ");
    }
    int b[100] ;
    int count;
     for (int i = 0; i < n1; i ++){
        b[i] = 1;
    }
    for (int i = 0; i < n1; i ++){
        if (b[i] == 1){
             count = 1;
            for (int j = i + 1; j < n1; j ++){
                if (strcmp(res[i], res[j]) == 0){
                    count ++;
                    b[j] = 0;
                }
            }
            if (count > 0)
                printf("%s %d\n", res[i], count);
        }
    }
}