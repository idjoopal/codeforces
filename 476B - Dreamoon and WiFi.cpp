#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double prob;
    char s1[11];
    char s2[11];
    int i1 = 0, i2 = 0;
    int q = 0;

    scanf("%s", s1);
    scanf("%s", s2);

    int n = strlen(s1);

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '+')
        {
            i1++;
        }
        else
        {
            i1--;
        }

        if (s2[i] == '+')
        {
            i2++;
        }
        else if (s2[i] == '-')
        {
            i2--;
        }
        else if (s2[i] == '?')
        {
            q++;
        }
    }

    if (((i1 - i2) + q) % 2 != 0 || q < abs(i1 - i2))
    {
        prob = 0;
    }
    else
    {
        int cnt_plus = ((i1 - i2 + q) / 2);
        prob = (double)1;

        if (cnt_plus != 0)
        {
            for (int i = q; i > q - cnt_plus; i--)
            {
                prob *= i;
            }
            for (int j = cnt_plus; j > 0; j--)
            {
                prob /= j;
            }
        }
        prob = prob /pow(2, q);
    }

    printf("%.12lf", prob);
    return 0;
}