#include <stdio.h>
int main (){
    int n, k;
    scanf("%d%d", &n, &k);
    int count = 0;
    for (int i = 2; i <= n; i ++){
        if (i % 64 == 0)
            count += 6;
        else if (i % 32 == 0)
            count += 5;
        else if (i % 16 == 0)
            count += 4;
        else if (i % 8 == 0)
            count += 3;
        else if (i % 4 == 0)
            count += 2;
        else if (i % 2 == 0)
            count ++;

    }
    if (count >= k)
        printf("Yes");
    else    
        printf("No");
}