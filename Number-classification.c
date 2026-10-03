#include <stdio.h>

int evenOdd(int n)
{
    return n % 2 == 0;
}

int positiveNegative(int n)
{
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;
}

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n, result;

    scanf("%d", &n);

    if(evenOdd(n))
        printf("Even\n");
    else
        printf("Odd\n");

    result = positiveNegative(n);

    if(result == 1)
        printf("Positive\n");
    else if(result == -1)
        printf("Negative\n");
    else
        printf("Zero\n");

    if(prime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    if(perfect(n))
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    return 0;
}