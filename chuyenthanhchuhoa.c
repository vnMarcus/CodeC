#include <stdio.h>
#include <string.h>
int main (){
    char str[200];
    gets(str);
    for (int i = 0; i < strlen(str); i ++){
        if (str[i] >= 'a' && str[i] <= 'z') 
            str[i] -= 32;
    }
    puts(str);
}