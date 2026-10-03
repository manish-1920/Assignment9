#include <stdio.h>

void ascending(int *a, int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void descending(int *a, int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[100],n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    ascending(a,n);

    printf("Ascending: ");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");

    descending(a,n);

    printf("Descending: ");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}