#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int loaitien[10] = {1000, 500,200, 100,50,20,10,5,2,1};
        int i,sotien,soto;  
        scanf("%d", &sotien);  
        int count = 0;
        for(i = 0; i < 10; i++)
        {
           soto = sotien/loaitien[i];
           if (soto != 0)
        		count += soto;
           sotien = sotien%loaitien[i];  
        }
        printf("%d", count);
        printf("\n");
    }
    
    return 0;
}