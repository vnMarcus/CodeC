#include <stdio.h>
struct student{
    char name[1000];
    char dateOfBirth[1000];
    int orderNumber;
    double sumPoint;
};
int main (){
    int num;
    scanf("%d", &num);
    scanf("\n");
    struct student arr[num + 3], tmp;
    double point1, point2, point3;
    for (int i = 1; i <= num; i ++){
        scanf("\n");
        gets(arr[i].name);
        scanf("\n");
        gets(arr[i].dateOfBirth);
        scanf("%lf", &point1);
        scanf("%lf", &point2);
        scanf("%lf", &point3);
        double point = (point1 + point2 + point3);
        arr[i].sumPoint = point;
        arr[i].orderNumber = i;
    }
    double max = arr[1].sumPoint;
    for (int i = 2; i <= num; i ++){
        if (arr[i].sumPoint > max)
            max = arr[i].sumPoint;
    }
    for (int i = 1; i < num; i ++){
        for (int j = i + 1; j <= num; j ++){
            if (arr[i].sumPoint < arr[j].sumPoint){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= num; i ++){
            printf("%d %s %s %.1lf\n", arr[i].orderNumber, arr[i].name, arr[i].dateOfBirth, arr[i].sumPoint);
    }
}