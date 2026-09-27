#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiple = 0;

    printf("Multiples of 7 from 7 to 70:\n");
     for (multiple = 7; multiple <= 70; multiple += 7){
        printf("%d\n", multiple);
     }
    return 0;
}
