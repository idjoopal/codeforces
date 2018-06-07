#include <stdio.h>

int main()
{
    int d1, d2, d3;
    int go_d1_first = 0;
    int total = 0;

    scanf("%d %d %d", &d1, &d2, &d3);

    // 집에서 가장 가까운 shop1 방문
    if (d1 <= d2)
    {
        total += d1;
        go_d1_first = 1;
    }
    else
    {
        total += d2;
        go_d1_first = 0;
    }

    // shop1에서 shop2가는 법
    // shop1->집->shop2 혹은 shop1->shop2
    if (d1 + d2 <= d3)
    {
        total += d1 + d2;
    }
    else
    {
        total += d3;
    }

    // shop2에서 집가는 법
    // shop2->shop1->집 혹은 shop2->집
    if (go_d1_first)
    {
        if (d3 + d1 <= d2)
        {
            total += d3 + d1;
        }
        else
        {
            total += d2;
        }
    }else{
        if (d3 + d2 <= d1)
        {
            total += d3 + d2;
        }
        else
        {
            total += d1;
        }
    }
    printf("%d", total);
    return 0;
}