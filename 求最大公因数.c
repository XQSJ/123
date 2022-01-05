#include<stdio.h>
int gcd_1(int a, int b) 
{
    return b == 0 ? a : gcd_1(b, a % b);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", gcd_1(x, y));
    return 0;
}