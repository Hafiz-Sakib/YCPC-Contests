#include <stdio.h>
int main()
{
    int Time, Perchantage, i, attempt;

    scanf("%d", &attempt);
    for (i = 1; i <= attempt; i++)
    {
        scanf("%d", &Perchantage);
        if (Perchantage < 60)
        {
            Time = (20 * 3) + (20 * 2) + (60 - Perchantage);
        }
        else if (Perchantage > 60 && Perchantage < 80)
        {
            Time = (20 * 3) + ((80 - Perchantage) * 2);
        }
        else if (Perchantage > 80 && Perchantage < 100)
        {
            Time = (100 - Perchantage) * 3;
        }
        printf("%d minutes\n", Time);
    }

    return 0;
}