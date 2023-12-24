#include <stdio.h>

int main()
{
    int N, num, i, j = 0, a, b, c = 0;
    printf("Enter the size of the array:");
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("\nEnter the value of Element-%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number:");
    scanf("%d", &num);
    for (i = 0; i < N; i++)
    {
        if (arr[i] == num)
        {
            if (arr[i + 1] != num)
            {
                if (c == 1)
                {
                    b = i;
                    printf("first and last occurences are at %d and %d", a, b);
                    break;
                }
                else
                {
                    printf("Both first and last occurences are at %d", i);
                    break;
                }
            }
            else
            {
                if (c == 0)
                {
                    a = i;
                    c = 1;
                }
                else if (c == 1)
                {
                    b = i;
                }
            }
            j = 1;
        }
    }
    if (j == 0)
    {
        printf("Both the indices are -1");
    }
    return 0;
}