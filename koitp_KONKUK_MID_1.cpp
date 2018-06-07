#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    int *a;
    int cnt = 1;
    int max_cnt = 1;

    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);

        if (i > 0 && a[i - 1] <= a[i])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (max_cnt < cnt)
        {
            max_cnt = cnt;
        }
    }

    printf("%d", max_cnt);

    return 0;
}