#include <stdio.h>
#include <math.h>

// function to calculate area of circle
float area_of_circle(float radius) {
    return M_PI * radius * radius;
}

// function to calculate circumference of circle
float circumference_of_circle(float radius) {
    return 2 * M_PI * radius;
}
float area_of_rectangle(float length, float width) {
    return length * width;
}
float celsius_to_fahrenheit(float temp) {
    return (temp * 9/5) + 32;
}

int main() {
    float radius, length, width, temp;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %.2f\n", area_of_circle(radius));
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Circumference of the circle is: %.2f\n", circumference_of_circle(radius));
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Area of the rectangle is: %.2f\n", area_of_rectangle(length, width));
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    printf("Temperature in Fahrenheit is: %.2f\n", celsius_to_fahrenheit(temp));
    return 0;
}