#include <stdio.h>
int main() {
    int totalHours, Days, Workers;
    printf("Enter total number of hours needed: ");
    scanf("%d", &totalHours);
    printf("Enter number of days: ");
    scanf("%d", &Days);
    printf("Enter number of workers: ");
    scanf("%d", &Workers);
    int WorkingHours = Days * 8 - (Days / 10) * 8;
    int WithOvertime = WorkingHours + Workers * 2 * Days;
    int Difference = totalHours - WithOvertime;
    if (Difference <= 0) {
        printf("Yes! %d hours left.\n", -Difference);
    } else {
        printf("Not enough time! %d hours needed.\n", Difference);
    }
    return 0;
}