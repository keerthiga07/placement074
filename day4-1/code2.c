#include <stdio.h>
void swap(int,int);
int main()
{
    int a=0,b=0;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before Calling Swap function:\nValue of a: %d\nValue of b:%d",a,b);
    printf("\n---------------------------------------------------------\n");
    swap(a,b);
    printf("After Calling Swap function:\nValue of a: %d\nValue of b:%d",a,b);
    printf("\n---------------------------------------------------------\n");
    return 0;
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("\nThe values of a and b in the swap function after swapping are a=%d b=%d\n",a,b);
    printf("\n---------------------------------------------------------\n");
}

/*
Input:
Enter the value of a:10
Enter the value of b:20
Output:
Before Calling Swap function:
Value of a: 10
Value of b:20
---------------------------------------------------------

The values of a and b in the swap function after swapping are a=20 b=10

---------------------------------------------------------
After Calling Swap function:
Value of a: 10
Value of b:20
---------------------------------------------------------
*/