#include <stdio.h>
int sogiam(int n) {
	int a, b;
	a = n % 10;
	n /= 10;
	while(n > 0) {
		b = n % 10;
		n /= 10;
		if(b <= a) {
			return 0;
		}
		a = b;
	}
	return 1;
}
int main (){
	int t;
    scanf("%d", &t);
    while (t --)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int count = 0;
        for (int i = a; i <= b; i ++){
            if(sogiam(i))
                count ++;
        }
        printf("%d\n", count);

    }
    
}