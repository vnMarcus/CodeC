#include <string.h>
#include <stdio.h>
int main (){
    int t;
    scanf("%d\n", &t);
    while (t --)
    {
        char s[300];
        gets(s);
        int count = 0;
        int ckeck = 1;
        for (int i = 0; i < strlen(s)/ 2; i ++){
            if (s[i] != s[strlen(s) - 1 - i]){
                count ++;
                ckeck = 0;
            }
        }
       if (strlen(s) % 2 == 0){
           if (count == 1)
                printf("YES");
            else
                printf("NO");
       }
       else{
           if (strlen(s) == 1)
                printf("YES");
            else if (ckeck == 1){
                printf("YES");
            }
            else if (count == 1)
                printf("YES");
            else
                printf("NO");
       }
       printf("\n");
    }
    
}