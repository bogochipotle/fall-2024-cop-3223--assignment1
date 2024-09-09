#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
int main(void);

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
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter coordinates for Point #2 (x2 y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    // Assuming we have a fixed perimeter calculation example, adjust as needed
    double perimeter = distance * 2; // Just a placeholder calculation
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 3.0; // Difficulty level
}

double calculateArea() {
    double distance = calculateDistance();
    // Assuming a square area for simplicity
    double area = distance * distance; // Just a placeholder calculation
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0; // Difficulty level
}

double calculateWidth() {
    double x1, x2;
    printf("Enter x-coordinates for Point #1 and Point #2: ");
    x1 = askForUserInput();
    x2 = askForUserInput();
    
    double width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 2.0; // Difficulty level
}

double calculateHeight() {
    double y1, y2;
    printf("Enter y-coordinates for Point #1 and Point #2: ");
    y1 = askForUserInput();
    y2 = askForUserInput();
    
    double height = fabs(y2 - y1);
    
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 2.0; // Difficulty level
}

double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}

