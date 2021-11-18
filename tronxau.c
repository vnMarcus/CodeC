#include <stdio.h>
#include <string.h>
char s1[205], s2[205], s[405]; int n;
int tim(){
    char tmp[500];
    for (int buoc = 1; buoc <= 2 * n; buoc ++){
        int n1 = 0;
        for (int i = 0; i < n; i ++){
            tmp[n1 ++] = s2[i];
            tmp[n1 ++] = s1[i];
        }
        tmp[n1] = '\0';
        if (strcmp(tmp, s) == 0)        return buoc;
        for (int i = 0; i < n; i ++){
            s1[i] = tmp[i];
            s2[i] = tmp[i + n];
        }
        s1[n] = '\0';
        s2[n] = '\0';
    }
    return -1;
}
int main (){
    while (1){
        scanf("%d", &n);
        if (n == 0) break;
        scanf("%s %s %s", &s1, &s2, &s);
        printf("%d\n", tim());
    }
}