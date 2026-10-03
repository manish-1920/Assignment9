#include <stdio.h>

void findValues(int *a, int n, int *small,
                int *secondSmall, int *great,
                int *secondGreat, int *count)
{
    int i;

    *count = 0;

    for(i=0;i<n;i++)
    {
        if(*count == 0)
        {
            *small = a[i];
            *great = a[i];
            *count = 1;
        }
        else
        {
            if(a[i] < *small)
                *small = a[i];

            if(a[i] > *great)
                *great = a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i] != *small &&
           (*count < 2 || a[i] < *secondSmall))
        {
            *secondSmall = a[i];
        }

        if(a[i] != *great &&
           (*count < 2 || a[i] > *secondGreat))
        {
            *secondGreat = a[i];
        }
    }

    *count = 0;

    for(i=0;i<n;i++)
    {
        int j, found = 0;

        for(j=0;j<i;j++)
        {
            if(a[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
            (*count)++;
    }
}

int main()
{
    int a[100],n,i;
    int small,secondSmall,great,secondGreat,count;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    findValues(a,n,&small,&secondSmall,
               &great,&secondGreat,&count);

    if(count < 2)
    {
        printf("Fewer than two distinct values.\n");
    }
    else
    {
        printf("Smallest = %d\n",small);
        printf("Second Smallest = %d\n",secondSmall);
        printf("Greatest = %d\n",great);
        printf("Second Greatest = %d\n",secondGreat);
    }

    return 0;
}