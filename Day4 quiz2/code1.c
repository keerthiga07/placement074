#include <stdio.h>

int main()
{
    int N, a = 0, b = 0, i;
    printf("Enter the size of the array:");
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("\nEnter the value of Element-%d:", i + 1);
        scanf("%d", &arr[i]);
        if (a == 0 && b == 0)
        {
            a = arr[i];
        }
        else if (a < arr[i])
        {
            b = a;
            a = arr[i];
        }
        else if (a > arr[i])
        {
            if (b < arr[i])
            {
                b = arr[i];
            }
        }
    }
    printf("%d", b);
    return 0;
}