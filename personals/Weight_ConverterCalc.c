#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;
    
    printf("Welcome to the Weight Converter Calculator");
    getchar();
    printf("This calcultor will convert two measurements:\n");
    printf("1.) Kilograms to Pounds\n");
    printf("2.) Pounds to Kilograms");
    getchar();
    
    printf("Enter your choice of conversion (1/2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weight (in kg): ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2fkg is equal to %.2flbs.", kilograms, pounds);
    }
    else if(choice == 2){
        printf("Enter the weight (in lbs): ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2flbs is equal to %.2fkg.", pounds, kilograms);
    }
    else{
        printf("Invalid Choice! Please choose only between 1/2.");
    }

    return 0;
}