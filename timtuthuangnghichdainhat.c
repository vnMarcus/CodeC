#include <stdio.h>
#include <string.h>
int thuannghich(char *s)
{
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
            return 0;
    }
    return 1;
}
struct tn
{
    char tu[1000];
} a[1003];
int main()
{
    char s[1003];
    int count = 0, max = 0;
    int dem[1000];
    while (scanf("%s", &s) != -1)
    {
        if (thuannghich(s))
        {
            if (strlen(s) > max)
            {
                count = 0;
                dem[count] = 1;
                max = strlen(s);
                strcpy(a[count].tu, s);
                count++;
            }
            else if (strlen(s) == max)
            {
                int flag = 0;
                for (int i = 0; i < count; i++)
                {
                    if (strcmp(a[i].tu, s) == 0)
                    {
                        flag = 1;
                        dem[i]++;
                    }
                }

                if (!flag)
                {
                    strcpy(a[count].tu, s);
                    dem[count] = 1;
                    count++;
                }
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%s %d\n", a[i].tu, dem[i]);
    }
}