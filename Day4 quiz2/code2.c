#include <stdio.h>

int main()
{
    int N, sum, n = 0, i, j, a, b;
    printf("Enter the size of the array:");
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("\nEnter the value of Element-%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the sum:");
    scanf("%d", &sum);
    i = 0;
    j = 1;
    while (n == 0)
    {
        if (arr[i] + arr[j] == sum)
        {
            n = 1;
            a = arr[i];
            b = arr[j];
        }
        else if (j == N - 1)
        {
            i++;
            j = i + 1;
        }
        else if (i == N - 1)
        {
            break;
        }
        else
        {
            j++;
        }
    }
    if (n == 1)
    {
        printf("\nYes %d + %d = %d", a, b, sum);
    }
    else
    {
        printf("\nNo");
    }
    return 0;
}