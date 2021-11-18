#include <string.h>
#include <stdio.h>
int main (){
    char res[1000][1000];
    char s[1000];
    int count, max = 0;
    int dem[1000] ;
    while (scanf("%s", s) != -1){
        if (strlen(s) > max){
            count = 0;
            dem[count] = 1;
            max = strlen(s);
            strcpy(res[count ++], s);
        }
        else if (strlen(s) == max){
            int flag = 0;
            for (int i = 0; i < count; i ++){
                if (strcmp(res[i], s) == 0){
                    dem[i] ++;
                    flag = 1;
                }
            }
            if (!flag){
                strcpy(res[count], s);
                dem[count ++] = 1;
            }
        }
    }
    for (int i = 0; i < count; i ++){
        printf("%s %d %d\n", res[i], strlen(res[i]), dem[i]);
    }
}