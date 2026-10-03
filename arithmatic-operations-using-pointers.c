#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff,
               int *product, float *quotient)
{
    *sum = a + b;
    *diff = a - b;
    *product = a * b;

    if(b != 0)
        *quotient = (float)a / b;
    else
        *quotient = 0;
}

int main()
{
    int a,b;
    int sum,diff,product;
    float quotient;

    scanf("%d%d",&a,&b);

    calculate(a,b,&sum,&diff,&product,&quotient);

    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",product);

    if(b == 0)
        printf("Division by zero not possible\n");
    else
        printf("Quotient = %.2f\n",quotient);

    return 0;
}