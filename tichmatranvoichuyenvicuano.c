#include <stdio.h>

int main()
{
	int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	int i,j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int k,tg;
    printf("Test %d:\n", x);
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if (j>=m && n<m) break;
			tg = 0;
			for (k=0; k<m; k++)
			{
				tg += a[i][k]*a[j][k]; 
			}
			printf("%d ",tg);
		}
		printf("\n");
	}
    }
	return 0;
}