#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Define PI

// Function declarations
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double x1, double y1, double x2, double y2);
double calculateArea(double x1, double y1, double x2, double y2);
double calculateWidth(double x1, double y1, double x2, double y2);
double calculateHeight(double x1, double y1, double x2, double y2);

int main(int argc, char **argv) {
    double x1, y1, x2, y2;
    double distance, perimeter, area, width, height;

    // Input points for distance, perimeter, area, width, height calculations
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Call respective functions and store results
    distance = calculateDistance(x1, y1, x2, y2);
    perimeter = calculatePerimeter(x1, y1, x2, y2);
    area = calculateArea(x1, y1, x2, y2);
    width = calculateWidth(x1, y1, x2, y2);
    height = calculateHeight(x1, y1, x2, y2);

    // Display the calculated values
    printf("Distance between points: %lf\n", distance);
    printf("Perimeter: %lf\n", perimeter);
    printf("Area: %lf\n", area);
    printf("Width: %lf\n", width);
    printf("Height: %lf\n", height);

    return 0;
}

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the points and calculated distance
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

// Function to calculate perimeter based on distance
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = 2 * PI * distance;  // Hypothetical perimeter using PI

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return perimeter;
}

// Function to calculate area
double calculateArea(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double area = PI * pow(distance, 2); // Hypothetical area calculation using PI

    printf("The area of the city encompassed by your request is %lf\n", area);

    return area;
}

// Function to calculate width
double calculateWidth(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double width = distance / 2;  // Hypothetical width calculation

    printf("The width of the city encompassed by your request is %lf\n", width);

    return width;
}

// Function to calculate height
double calculateHeight(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double height = distance * 1.5;  // Hypothetical height calculation

    printf("The height of the city encompassed by your request is %lf\n", height);

    return height;
}
