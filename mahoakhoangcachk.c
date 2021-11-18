#include <stdio.h>
#include <string.h>
char P[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
int tim(char *s, char x){
    for (int i = 0;i < strlen(s); i ++){
        if (s[i] == x)
            return i;
    }
}
int main (){
    int k;
    scanf("%d", &k);
    char s[200];
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i ++){
        int t = tim(P, s[i]);
        s[i] = P[(t + k) % 28];
    }
    for (int i = strlen(s) - 1; i >= 0; i --)
        printf("%c", s[i]);
}