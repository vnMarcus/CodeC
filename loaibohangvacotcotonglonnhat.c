#include <stdio.h>
int x = 100000;
int main (){
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k ++){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[100][100];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            scanf("%d", &a[i][j]);
        }
    }
    int max = 0, sum;
    int vthang, vtcot;
    for (int i = 0; i < n; i ++){
        sum = 0;
        for (int j = 0; j < m;j ++){
            sum += a[i][j];
        }
        if (sum > max){
                max = sum;
                vthang = i;
        }
    }
    for (int i = 0;i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (i == vthang)
                a[i][j] = x;
        }
    }
    max = 0;
    for (int i = 0; i < m; i ++){
        sum = 0;
        for (int j = 0; j < n; j ++){
            if (a[j][i] != x)   sum += a[j][i];
        }
        if (sum > max){
            max = sum;
            vtcot = i;
        }
    }
    for (int i = 0;i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (j == vtcot)
                a[i][j] = x;
        }
    }
    printf("Test %d:\n", k);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            if (a[i][j] != x)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    }
}
/*
#include <stdio.h>
void Solve (int k)
{
  int x=100000;
  int row,col;
  scanf("%d%d", &row, &col);
  int a[row][col];
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++) 
        scanf("%d",&a[i][j]);
  }
  // Nhập vào 

  int max= -1;
  for (int i=0; i < row; i++)
  {
    int sum=0;
    for (int j=0; j<col; j++) 
        sum+=a[i][j];
    if (sum>max) 
        max=sum;
  }
  for (int i=0; i<row; i++)
  {
    int sum=0;
    for (int j=0; j<col; j++) 
        sum+=a[i][j];
    if (sum==max)
    {
      for (int tmp=0; tmp<col; tmp++) a[i][tmp]=x;
    }
  }
  int maxx = -1;
  for (int i=0; i<col; i++)
  {
    int sum1 = 0;
    for (int j=0; j<row; j++)
    {
      if (a[j][i]!=x) sum1+=a[j][i];
    }
    if (sum1>maxx) maxx=sum1;
  }

  for (int i=0; i<col; i++)
  {
    int sum1=0;
    for (int j=0; j<row; j++)
    {
      if (a[j][i]!=x) sum1+=a[j][i];
    }
    if (sum1==maxx)
    {
      for (int tmp=0; tmp<row; tmp++) a[tmp][i]=x;
    }
  }
  printf("Test %d:\n",k);
  for (int i=0; i<row; i++)
  {
    int check=0;
    for (int j=0; j<col; j++)
    {
      if (a[i][j] != x)
      {
        printf("%d ",a[i][j]);
        check=1;
      }
    }
    if (check==1) printf("\n");
  }
}


int main()
{
  int t,k=1;
  scanf("%d",&t);
  while (t--)
  {
    Solve(k);
    k++;
  }
	return 0;
}
*/