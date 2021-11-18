#include <stdio.h>
#include <string.h>
int main (){
    int n, k, b;
    char x[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%d", &n);
    scanf("%d", &b);
    char s[33] = {};
    k = 0;
    while (1){
        int tmp = n % b;
        s[k ++] = x[tmp];
        n /= b;
        if (n == 0)
            break;
    }
    for (int i = strlen(s) - 1; i >= 0; i --){
        printf("%c", s[i]);
    }

}