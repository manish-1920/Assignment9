#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if(n == 0)
        return 1;

    while(n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int main()
{
    int n, rev;

    scanf("%d", &n);

    rev = reverseNumber(n);

    printf("Sum = %d\n", sumDigits(n));
    printf("Digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", rev);

    if(n == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}