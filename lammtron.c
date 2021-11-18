#include <stdio.h>
#include <string.h>
int main (){
    char s[200] = {}, s1[200];
    gets(s1);
    if (s1[0] == '9'){
        strcat(s, "0");
        strcat(s, s1);
    }
    else{
        strcpy(s, s1);
    }
    for (int i = strlen(s) - 1; i > 0; i --){
        if (s[i] < 5 || (s[i] == '9' && s[i - 1] == '9'))
            s[i] = '0';
        else{
            s[i] = '0';
            s[i - 1] += 1;
        }
    }
    puts(s);
}