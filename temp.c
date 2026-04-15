#include <stdio.h>
int main() {   
    float tempC, tempF;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &tempC);
    tempF = (tempC * 9 / 5) + 32; 
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", tempC, tempF);
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF - 32) * 5 / 9;
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", tempF, tempC);
    
    return 0;
}
