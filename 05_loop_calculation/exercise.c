#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km = 0;
    double miles = 0.0;
    double KM_TO_MILES = 0.621371;

    printf("Km\tMiles\n");

    for (km = 1; km <= 10; ++km){
        miles = km * KM_TO_MILES;
        printf("%d\t%.2f\n", km, miles);
    }
    return 0;
}
