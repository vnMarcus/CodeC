#include <stdio.h>
int ckeck(int n){
    while (n > 0)
    {
        int last = n % 10;
        n /= 10;
        int last1 = n % 10;
        if (last1 > last)
            return 0;
    }
    return 1;
    
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        int n;
        scanf("%d", &n);
        int dau = 1, cuoi = 10;
        while (n -- )
        {
            dau *= 10;
            cuoi *= 10;
        }
        for (int i = dau / 10; i < cuoi / 10; i ++){
            if(ckeck(i))
            {
                printf("%d ", i);
            }                
        }
        printf("\n");
    }
    
}