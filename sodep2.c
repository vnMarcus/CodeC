#include <stdio.h>
#include <string.h>
int ckecktn(char *s){
    int n = strlen(s);
    int sum = 0;
    for (int i = 0; i < n; i ++){
        sum += s[i] - 48;
    }
    for (int i = 0; i < n; i ++){
        if (i < n / 2)
            if (s[i] != s[n - i - 1] || s[0] != '8' || s[n - 1] != '8' || sum % 10 != 0)
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