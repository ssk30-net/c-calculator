#include <math.h>
#include <stdio.h>


void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}


void calcSubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The sum is %d\n", result);
}

void calcProduct() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The Product is %d\n", result);
}
void calcDivision() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a/b;
    printf("The Division is %d\n", result);
}
void calcExponentiation() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = pow(a,b);
    printf("The sum is %d\n", result);
}
// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

// Fill the rest of the functionality here!
// 7. Cosine - Sashank
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = cosin(radians);

    printf("The cosine value is %f", answer);
}
// 7. Cosine(sai mrudhun)
void calccosine() {
    int angle;
    scanf("%d",&angle);

    // converting degrees into radians
    double radians=angle / 180.0 * 3.14;
    double answer=cos(radians);

    printf("the cosine value is %f", answer);
}
// 8. Tangent
// 9. Floor
// 10. Ceiling
// 11. Round
// 12. Absolute value

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        case 2:
        	calcSubtraction();
            break;
        case 3:
        	calcProduct();
            break;
        case 4:
        	calcDivision();
            break;
        case 5:
        	calcExponentiation();
            break;

        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
            calcCosine();
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        default:
            printf("Invalid choice!");
    }
    return 0;
}

//Avanish ...
