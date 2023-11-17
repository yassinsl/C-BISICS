#include <stdio.h>

// Define an enum named Color with three constants: RED, GREEN, and BLUE
enum Color {
    RED,
    GREEN,
    BLUE
};

int main(void) {
    char c[10];
    // Declare a variable of type enum Color
    enum Color selectedColor;
    printf("please enter one color :");
    scanf("%s",c);
   
    selectedColor = c[10];

    // Use the variable in a switch statement
    switch (selectedColor) {
        case RED:
            printf("The color is red.\n");
            break;
        case GREEN:
            printf("The color is green.\n");
            break;
        case BLUE:
            printf("The color is blue.\n");
            break;
        default:
            printf("Invalid color.\n");
    }

    return 0;
}
