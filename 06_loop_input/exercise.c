#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM_READINGS = 5;
    int temperatures[NUM_READINGS];
    int i = 0;

    for (i = 0; i < NUM_READINGS; ++i){
        printf("Enter temperature reading %d: ", i + 1);
        scanf("%d", &temperatures[i]);
    }
    printf("\nYou entered the following temperatures:\n");
    for (i = 0; i < NUM_READINGS; ++i){
        printf("Reading %d: %d\n", i + 1, temperatures[i]);
    }
    return 0;
}
