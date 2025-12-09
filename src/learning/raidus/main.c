#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double pi = 3.141592653589793;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    surface_area = 4 * pi * radius * radius;
    volume = (4.0 / 3.0) * pi * pow(radius, 3);
    printf("For a sphere with radius %.2lf:\n", radius);
    printf("Area of the circle: %.2lf\n", area);
    printf("Surface area of the sphere: %.2lf\n", surface_area);
    printf("Volume of the sphere: %.2f\n", volume);
    return 0;

}