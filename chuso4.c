#include <stdio.h>
int rev(int n){
    int dao = 0;
    int m = n;
    while (m > 0){
        dao = dao * 10 + m % 10;
        m /= 10;
    }
    if (dao == n)
        return 1;
    else    
        return 0;
}
int ckeck(int n){
    while (n > 0){
        int last = n % 10;
        n /= 10;
        if(last == 4)
            return 0;
    }
    return 1;
}
int sum(int n){
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        n /= 10;
        sum += last;
    }
    if (sum % 10 == 0)
        return 1;
    else    
        return 0;
    
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int n;
        scanf("%d", &n);
        int dau = 1, cuoi = 10;
        while (n --){
            dau *= 10;
            cuoi *= 10;
        }
        for (int i = dau / 10; i < cuoi / 10; i ++){
            if( rev(i) && sum(i) && ckeck(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}