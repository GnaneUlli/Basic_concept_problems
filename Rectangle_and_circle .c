#include <stdio.h>

int main() {
    /* In this program, we declare variables length, breadth, and radius 
    to store the dimensions of the rectangle and the radius of the circle.
    We also declare variables rectangleArea, 
    rectanglePerimeter, circleArea, and circleCircumference 
    to store the calculated values */
    
    float length, breadth, radius;
    float rectangleArea, rectanglePerimeter, circleArea, circleCircumference;

    // Input length and breadth of rectangle
    printf("Enter length of rectangle: ");
    /* We use the scanf function to read these values from the 
    keyboard and store them in the corresponding variables */
    
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    /* To calculate the area and perimeter of the rectangle, we use the formulas 
    area = length * breadth and perimeter = 2 * (length + breadth). */
    
    rectangleArea = length * breadth;
    
    rectanglePerimeter = 2 * (length + breadth);

    // Input radius of circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    /* To calculate the area and circumference of the circle, 
    we use the formulas area = π * radius * radius 
    and circumference = 2 * π * radius, */
    
    circleArea = 3.14159 * radius * radius;
    circleCircumference = 2 * 3.14159 * radius;

    // Display the results
    printf("Area of rectangle: %.2f\n", rectangleArea);
    
    printf("Perimeter of rectangle: %.2f\n", rectanglePerimeter);
    
    printf("Area of circle: %.2f\n", circleArea);
    
    printf("Circumference of circle: %.2f\n", circleCircumference);

    return 0;
}
