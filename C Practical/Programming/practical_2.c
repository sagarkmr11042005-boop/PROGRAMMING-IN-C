#include <stdio.h>

int main() {
    // write your name and ERP number
    printf("Sachin Kumar Saw\n");
    printf("RU-25-11234\n");

    // integer variable 
    int a, b;
    // float variable 
    float f;
    // character variable 
    char c;
    // double variable
    double d;

    // input values using scanf
    printf("Enter an integer: ");
    scanf("%d", &b);

    printf("Enter another integer: ");
    scanf("%d", &b);

    printf("Enter a float value: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c); // space before %c to ignore newline character

    printf("Enter a double value: ");
    scanf("%1f", &d);

    //Display the entered values using printf

    printf("\nYou entered:\n");
    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d\n", b);
    printf("Float: %.2f\n", f);
    printf("Character: X\n", c);
    printf("Double: %.31f\n", d);

    // swapping two integers
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d\n",b);
        

    return 0;
}