#include <stdio.h>

int gcd(int a, int b)
{
    int r;

    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a,b);
}

int main()
{
    int a, b, c;
    int g, l;

    scanf("%d%d%d", &a, &b, &c);

    g = gcd(gcd(a,b),c);
    l = lcm(lcm(a,b),c);

    printf("GCD = %d\n", g);
    printf("LCM = %d\n", l);

    return 0;
}