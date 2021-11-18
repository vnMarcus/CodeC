#include <stdio.h>
#include <string.h>
int main (){
    char s[200];
    gets(s);
    int b[100] = {};
    int m = 0;
    for (int i = 0; i < strlen(s); i ++){
        int max = 0;
        for (int j = 0; j <= i; j ++)
            if (s[i] > s[j])
                if (b[j] > max)  
                    max = b[j];
        b[i] = max + 1;
        if (b[i] > m)
            m = b[i];
    }       
    printf("%d ", 26 - m);
}