#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int chan = 2;
    for (int i = 0; i < n; i ++){
        for (int j = 2; j <= chan; j += 2){
            printf("%d", j);
        }
        for (int j = chan - 2;  j >= 2; j -= 2){
            printf("%d", j);
        }   
        chan += 2;
        printf("\n");
    }
}