#include <stdio.h>
#include <string.h>
int tn(char *s)
{
    if (strlen(s) == 1)
        return 0;
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    }
    return 1;
}
struct num
{
    char so[1000];
    int index;
};
int main()
{
    char s[1000];
    struct num a[1000], tmp;
    int count = 0, max = 0;
    int dem[1000];
    while (scanf("%s", &s) != -1)
    {
        if (tn(s))
        {
            strcpy(a[count].so, s);
            a[count].index = 1;
            int flag = 0;
            for (int i = 0; i < count; i++)
            {
                if (strcmp(a[i].so, s) == 0)
                {
                    a[i].index++;
                    flag = 1;
                }
            }
            if (!flag)
            {
                strcpy(a[count].so, s);
                a[count++].index = 1;
            }
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%s %d\n", a[i].so, a[i].index);
    }
}