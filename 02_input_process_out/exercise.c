#include <stdio.h>
#include <stdlib.h>

int main()
{

    double radius = 0.0;
    double area = 0.0;
    double circumference = 0.0;
    double PI = 3.14159265;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area is %.2f\n", area);
    printf("Circumference is %.2f\n", circumference);
    return 0;
}
