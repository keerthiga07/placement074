#include <stdio.h>
int main() {
    int num=372;
    int year=num/365;
    int week=year*52;
    int remweek=(num%365)/7;
    int rem_days=num%365;
    printf("Number of Years: %d\n", year);
    printf("Number of Weeks: %d\n", week);
    printf("Number of Days: %d", rem_days);
}
