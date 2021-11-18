#include <stdio.h>
#include <math.h>
#define MAX 100000
int findMin(int *arr, int n){
    int min = arr[0];
    for (int i = 0; i < n; i ++){
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
void quickSort(int x[], int l , int r)
{
	int temp;
	if (l <= r)
	{
		int key = x[(l+r)/2];
		int i = l;
		int j = r;
		while (i <= j)
		{
			while (x[i] < key)
				i++;
			while (x[j] > key)
				j--;
			if (i <= j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				i++;
				j--;
			}
		}
		if (l < j)
			quickSort(x, l, j);
		if (r > i)
			quickSort(x, i, r);
	}
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int n;
    scanf("%d", &n);
    int a[MAX];
    int b[MAX];
    for (int i = 0; i < n;i ++){
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n - 1;i ++){
        b[i] = abs(a[i + 1] - a[i]) ;
    }
    int count = 0;
    int min = findMin(b, (n - 1));
    printf("%d ", min);
    for (int i = 0; i < n - 1;i ++){
        if (b[i] == min)
            count ++;
    }
    printf ("%d ", count);
    printf("\n");
    }
    
}