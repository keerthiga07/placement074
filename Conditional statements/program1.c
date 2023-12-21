#include <stdio.h>
int main() {
    int X,Y,Z;
    printf("Enter value for X:");
    scanf("%d",&X);
    printf("\nEnter value for Y:");
    scanf("%d",&Y);
    printf("\nEnter value for Z:");
    scanf("%d",&Z);
    if(X>Y&&X<Z||X>Z&&X<Y){
        printf("1");
    }
    else if(Y>X&&Y<Z||Y>Z&&Y<X){
        printf("2");
    }
    else if(Z>X&&Z<Y||Z>Y&&Z<X){
        printf("3");
    }
    return 0;
}