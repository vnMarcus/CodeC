#include <stdio.h>
long long dao(long long n){
    long long m = n;
    long long dao = 0;
    while (m > 0){
        dao = dao * 10 + m % 10;
        m /= 10;
    }
    if (dao == n)
        return 1;
    else
        return 0;
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        long long  n;
        scanf("%lld", &n);
        int sum = 0;
        int ckeck = 1;
        while (n > 0){
            int last = n % 10;
            n /= 10;
            sum += last;
            if (last % 2 == 0)
                ckeck = 0;
        

        
    }
        if (dao(n) == 1 && ckeck == 1 && sum % 2 != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

}