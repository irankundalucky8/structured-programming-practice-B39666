#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code = 0;
    int quantity = 0;
    double price = 0.0;
    double total = 0.0;

    printf("====================================\n");
    printf(" Item Code | Item  | Price\n");
    printf("     1     | Bread | $2.50\n");
    printf("     2     | Milk  | $1.80\n");
    printf("     3     | Eggs  | $3.20\n");
    printf("     4     | Rice  | $5.00\n");
    printf(" Enter code 0 at any time finish.\n");
    printf("=====================================\n");

    printf("Enter item code: ");
    scanf("%d", &code);

    while (code != 0){
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (code){
        case 1:
            price = 2.50;
            break;
        case 2:
            price = 1.80;
            break;
        case 3:
            price = 3.20;
            break;
        case 4:
            price = 5.00;
            break;
        default:
            price = 0.0;
            printf("Unknow item code, skipping.\n");
            break;
        }
        total += price * quantity;
        printf("Enter item code: ");
        scanf("%d", &code);
    }
    printf("\nTotal bill: $%.2f\n", total);
    return 0;
}
