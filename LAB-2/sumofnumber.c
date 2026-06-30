#include<stdio.h>
int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d", totalSum(n));

    return 0;
}
int seriesSum(int n)
{
    if (n == 1)
        return 1;
    return n + seriesSum(n - 1);
}
int totalSum(int n)
{
    if (n == 1)
        return 1;
    return seriesSum(n) + totalSum(n - 1);
}