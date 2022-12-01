#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int number = 0, charge = 0;
        char str[100];
        scanf("%s", str);
        for (int i = 0; i < str[i] != 0; i++)
        {
            if (str[i] != '%')
            {
                number = number * 10 + str[i] - '0';
            }
        }

        for (int i = number; i <= 100; i++)
        {
            if (i < 60)
                charge++;
            else if (i < 80)
                charge += 2;
            else if (i < 100)
                charge += 3;
        }
        printf("%d %s", charge, "minutes\n");
    }
}