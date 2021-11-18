#include <stdio.h>
#include <string.h>
int main (){
    int t;
    scanf("%d\n", &t);
    while (t --)
    {
        char s[2000], b[11] = {'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s", s);
    int n1 = 10;
    for (int i = 0; i < strlen(s); i ++){
        if (s[0] == '0'){
            printf("INVALID\n");
            n1 = -1;
            break;
        }
        if (s[i] < '0' || s[i] > '9'){
            printf("INVALID\n");
            n1 = -1;
            break;
        }
        for (int j = 0; j < n1; j ++){
            if (s[i] == b[j]){
                b[j] = b[n1 - 1];
                n1 --;
            }
            if (n1 == 1){    printf("YES\n"); break;}
        }
    }
    if (n1 > 0)     printf("NO\n");
    }
    
}