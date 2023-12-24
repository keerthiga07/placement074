#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n);
int* duplicate(int arr[], int n);

void sort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int* duplicate(int arr[], int n)
{
    int k=0;
    int* dupli=malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            if(k==0){
                 dupli[k]=arr[i];
                k++;
            }
            if(k!=0 && dupli[k-1]!=arr[i]){
                dupli[k]=arr[i];
                k++;
            }
        }
    }
    if(k==0) 
    {
        free(dupli);
        return NULL;
    }
    return dupli;
}

int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    printf("Enter the elements of array:");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr, n);
    int* p=duplicate(arr,n);
    printf("Duplicate elements: ");
    if(p==NULL)
    {
        printf("-1");
        return 0;
    }
    for (int i=0;i<n-1;i++){
        if (p[i]!=0)
            printf("%d ",p[i]);
    }
    free(arr);
    free(p);

    return 0;
}

/*
Input:
Enter no. of elements:20
Enter the elements of array:13 4 2 1 1 2 3 1 3 4 1 1 5 6 2 4 9 7 5 4
Output:
Duplicate elements: 1 2 3 4 5 
*/