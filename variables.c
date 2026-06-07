#include <stdio.h>

// print a sum
// practice variable declaration and assignment

int main() {
    int a = 5;
    int b;

    b = 10;

    int c = a + b;

    char* str = "The sum of a and b is: ";
    // C does not have typical string types
    // char* is a pointer to a chain of characters'

    printf("%s%d\n", str, c);
    /* %d in this case refers to an integer 
     * %s for a string
     * it is simply a placeholder
     * %u for an unsigned decimal, %f for a float, %lf for a double, and %c for a char
     */
    

    return 0; 
    // we return 0 to indicate program success
    // not necessarily the sum since the intent was to print it only
}