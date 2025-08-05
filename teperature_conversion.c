#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    int choice;
    float temperature;

    do {
        // Display the menu
        printf("\n--- Temperature Conversion Menu ---\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Celsius to Kelvin\n");
        printf("3. Fahrenheit to Celsius\n");
        printf("4. Fahrenheit to Kelvin\n");
        printf("5. Kelvin to Celsius\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("0. Exit\n");
        printf("-----------------------------------\n");
        printf("Enter your choice: ");
        
        // Get user input for the menu choice
        if (scanf("%d", &choice) != 1) {
            // Handle invalid input that is not an integer
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else if (choice >= 1 && choice <= 6) {
            printf("Enter the temperature to convert: ");
            if (scanf("%f", &temperature) != 1) {
                // Handle invalid input for temperature
                printf("Invalid input. Please enter a valid number.\n");
                while (getchar() != '\n');
                continue;
            }

            switch (choice) {
                case 1:
                    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
                    break;
                case 2:
                    printf("%.2f Celsius is equal to %.2f Kelvin.\n", temperature, celsiusToKelvin(temperature));
                    break;
                case 3:
                    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, fahrenheitToCelsius(temperature));
                    break;
                case 4:
                    printf("%.2f Fahrenheit is equal to %.2f Kelvin.\n", temperature, fahrenheitToKelvin(temperature));
                    break;
                case 5:
                    printf("%.2f Kelvin is equal to %.2f Celsius.\n", temperature, kelvinToCelsius(temperature));
                    break;
                case 6:
                    printf("%.2f Kelvin is equal to %.2f Fahrenheit.\n", temperature, kelvinToFahrenheit(temperature));
                    break;
            }
        } else {
            printf("Invalid choice. Please enter a number from 0 to 6.\n");
        }
    } while (choice != 0);

    return 0;
}
