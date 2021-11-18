#include <stdio.h>
#include <string.h>
int main (){
    char str[100000];
    int chu = 0, so = 0, kt = 0;
    gets(str);
    for (int i = 0; i < strlen(str) ; i ++){
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
            chu ++;
        else if (str[i] >= '0' && str[i] <= '9')
            so ++;
        else
            kt ++;
    }
    printf("%d %d %d", chu, so, kt);
    
}