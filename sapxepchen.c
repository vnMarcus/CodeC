#include <stdio.h>

int main ()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int i,j;
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int tg;
	for (i=0; i<n; i++)
	{
		tg = a[i];
		for (j=i-1; j >= 0 && a[j] > tg; j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = tg;
		printf("Buoc %d: ",i);
		for (j=0; j<i+1; j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
    return 0;
}