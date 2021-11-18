#include <stdio.h>
void xoa(int *a, int *n, int vt){
    for (int i = vt; i < *n; i ++){
        a[i] = a[i + 1];
    }
    *n -= 1;
}
int main (){
    int n;
    scanf("%d", &n);
    int a[n];
	for (int i = 0; i < n; i ++)
	{
		scanf("%d", &a[i]);
	}
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            if (a[i] == a[j]){
                xoa(a, &n, j);
                j --;
            }
        }
    }
    for (int i = 0; i < n; i ++){
        printf("%d ", a[i]);
    }


}