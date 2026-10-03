#include <stdio.h>

int total(int a, int b, int c, int d, int e)
{
    return a+b+c+d+e;
}

float percentage(int total)
{
    return total / 5.0;
}

char grade(float p)
{
    if(p >= 90)
        return 'A';
    else if(p >= 80)
        return 'B';
    else if(p >= 70)
        return 'C';
    else if(p >= 60)
        return 'D';
    else if(p >= 40)
        return 'E';
    else
        return 'F';
}

int passed(int a, int b, int c, int d, int e)
{
    if(a >= 40 && b >= 40 && c >= 40 &&
       d >= 40 && e >= 40)
        return 1;

    return 0;
}

int main()
{
    int a,b,c,d,e,t;
    float p;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    t = total(a,b,c,d,e);
    p = percentage(t);

    printf("Total = %d\n",t);
    printf("Percentage = %.2f\n",p);
    printf("Grade = %c\n",grade(p));

    if(passed(a,b,c,d,e))
        printf("Passed\n");
    else
        printf("Failed\n");

    return 0;
}