#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    int i = 0;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int COUNT = 6;

    for (i = 1; i <= COUNT; ++i){
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        if (number > 0){
            ++positives;
        }else if (number < 0){
            ++negatives;
        }else{
            ++zeros;
        }
    }
    printf("\nPositive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Zeros: %d\n", zeros);
    return 0;
}
