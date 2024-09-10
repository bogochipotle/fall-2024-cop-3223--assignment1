// Jake Johnson 5550737

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2);
    printf("The perimeter of the city is %.2f\n", perimeter);
    return 3.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance / 2, 2);
    printf("The area of the city is %.2f\n", area);
    return 4.0;
}

double calculateWidth() {
    double x1, x2;
    printf("Enter x-coordinates for Point #1 and Point #2: ");
    scanf("%lf %lf", &x1, &x2);

    double width = fabs(x2 - x1);
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);
    printf("The width of the city is %.2f\n", width);
    return 2.0;
}

double calculateHeight() {
    double y1, y2;
    printf("Enter y-coordinates for Point #1 and Point #2: ");
    scanf("%lf %lf", &y1, &y2);

    double height = fabs(y2 - y1);
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);
    printf("The height of the city is %.2f\n", height);
    return 3.0;
}