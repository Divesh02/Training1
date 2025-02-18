#include <stdio.h>
int main()
{
    char vehicleType;
    float distance, costPerKm, totalTax, discount = 0;
    printf("Enter Vehicle Type (C for Car, T for Truck, B for Bus): ");
    scanf(" %c", &vehicleType);
    printf("Enter Distance Traveled (in km): ");
    scanf("%f", &distance);
    if (vehicleType == 'C' || vehicleType == 'c')
    {
        costPerKm = 5;
    } else if (vehicleType == 'T' || vehicleType == 't')
       {
        costPerKm = 10;
        if (distance > 500)
        {
            discount = 0.10;
        }
    } else if (vehicleType == 'B' || vehicleType == 'b') 
       {
        costPerKm = 8;
        if (distance > 300)
        {
            discount = 0.05; 
        }
    }
else 
{
        printf("Invalid vehicle type!\n");
        return 0;
    }

    // Calculate total tax
    totalTax = distance * costPerKm;
    totalTax -= totalTax * discount;
    // Display output
    printf("\nToll Tax Calculation:\n");
    printf("Vehicle Type: %c\n", vehicleType);
    printf("Distance Traveled: %.2f km\n", distance);
    printf("Total Toll Tax: %.2f\n", totalTax);
    return 0;
}
