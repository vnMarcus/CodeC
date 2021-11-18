#include <stdio.h>
#include <stdlib.h>
int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}
int main (){
    int a[5] = {3,2,1,5,6};
    qsort(a, 5, sizeof(int), comparator);
    for (int i = 0; i < 5; i ++){
        printf("%d ", a[i]);
    }
}