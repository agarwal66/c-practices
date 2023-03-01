// write program area of circle
// circuference of circle in 2 dn casee
// area of rectangle;
// temprature conversion from c to F and F  to  c;
#include <stdio.h>
#include <math.h>
int main(){
    int c;
    float radius,circumference,area,l,b,temp_celsius,temp_kelvin;
       printf("Enter your choice:\n1. Find the area of a circle\n2. Find the circumference of a circle\n3. Find the area of a rectangle\n4. Convert Celsius to Kelvin\n");
   scanf("%d", &c);

    switch(c){
        case1:
        printf("Enter radius of circle:");
        scanf("%f",&radius);
        area = 3.14*radius*radius;
        printf("The area of circle:%f\n",area);
        break;
        case2:
        printf("Enter radius of circle:");
        scanf("%f",&radius);
        circumference = 2*3.14*radius;
        printf("The circumference of circle:%f\n",circumference);
        break;
        case 3:
        printf("Enter  length and breadth:");
        scanf("%f %f",&l,&b);
        area = l * b;
        printf("The area of rectangle:%f\n",area);
        break;
 case 4:
         printf("Enter the temperature in Celsius: ");
         scanf("%f", &temp_celsius);
         temp_kelvin = temp_celsius + 273.15;
         printf("The temperature in Kelvin is: %f\n", temp_kelvin);
         break;

    }
    return 0;
}