#include <stdio.h>

int main(){

    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Welcome to the Temperature Converter!");
    getchar();
    printf("This calculator will convert the temperature into the ff:\n");
    printf("C. Fahrenheit to Celcius");
    printf("F. Celcius to Fahrenheit");
    getchar();

    printf("Enter your choice (C/F): ");
    scanf("%c", &choice);

    if(choice == 'C'){
        printf("Enter your temperature (in °F): ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
        printf("%.1f°F is equal to %.1f°C.", fahrenheit, celsius);
    }
    else if(choice == 'F'){
        printf("Enter your temperature (in °C): ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("%.1f°C is equal to %.1f°F.", celsius, fahrenheit);
    }
    else{
        printf("Invalid Choice! Please enter only C/K");
    }


    return 0;
}