#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i ++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int chuso(int n){
    int last;
    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        if (isPrime(last) != 1)
            return 0;
    }
    return 1;
    
}
int main (){
    int t;
    scanf("%d", &t);
    while(t --)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int count = 0;
        for (int i = a; i <= b; i ++){
            if (isPrime(i) && chuso(i) )
               count ++;
        }
        printf("%d\n", count);
    }

}