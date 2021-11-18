#include <stdio.h>
#include <stdbool.h>
int main (){
    int n = 1000;
    bool ckeck[100];
    for (int i = 2; i <= n; i ++){
        ckeck[i] = true;
    }
    for (int i = 2; i <= n; i ++){
        if (ckeck[i] == true){
            for (int j = 2 * i; j <= n; j += i){
               ckeck[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i ++){
        if (ckeck[i] == true)
            printf("%d ", i);
    }
}