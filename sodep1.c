#include <stdio.h>
#include <string.h>
int ckecktn(char *s){
    int n = strlen(s);
    for (int i = 0; i < n; i ++){
        if (i < n / 2)
            if (s[i] != s[n - i - 1] || s[i] % 2 != 0 || s[n - i - 1] % 2 != 0)
                return 0;
    }
    return 1;
}

int main (){
    int t;
    scanf("%d\n", &t);
    while (t --)
    {
        char s[600];
        gets(s);
        if (ckecktn(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    

}