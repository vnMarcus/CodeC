#include <stdio.h>
#include <string.h>
int ckeck(char *s){
    for (int i = 0; i < strlen(s) / 2; i ++){
        if (s[i] != s[strlen(s) - 1 - i] || s[i] % 2 != 0)
            return 0;
    }
    return 1;
}
int main (){
    int t;
    scanf("%d", &t);
    scanf("\n");
    while (t --){
        char s[1000];
        gets(s);
        if (ckeck(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
}