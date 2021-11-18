#include <stdio.h>
#include <string.h>
int main (){
    int t;
    scanf("%d\n", &t);
    while (t --){
        char str[1000];
        gets(str);
        int chan = 0, le = 0, n = strlen(str);
        int so = 0;
        for (int i = 0; i < n; i ++){
            if (str[i] == ' ')
                so ++;
            if (str[i] == ' ' && str[i - 1] % 2 == 0)
                chan ++;
            else if (str[i] == ' ' && str[i - 1] % 2 != 0)
                le ++;
        }
        if (str[n - 1] % 2 == 0)
            chan ++;
        else    
            le ++;
        so += 1;
        if (so % 2 == 0 && chan > le)
            printf("YES");
        else if (so % 2 != 0 && le > chan)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}