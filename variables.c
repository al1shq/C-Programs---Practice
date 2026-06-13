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

    char string[] = "The sum of a and b is: ";
    // array of characters is another way C handles strings


    /* %d in this case refers to an integer 
     * %s for a string
     * it is simply a placeholder
     * %u for an unsigned decimal, %f for a float, %lf for a double, and %c for a char
     */
    printf("%s%d\n", str, c);
    
    // we cannot just do printf(str)
    // must use placeholders in C

     // do two \n\n to add an extra line break between outputs
     // \t adds a tab space before the string
     // \\ for a backslash, \" for a double quote, and \' for a single quote
    printf("\n\n");
    printf("\t%s%d\n", string, c);
    
    // we return 0 to indicate program success
    // not necessarily the sum since the intent was to print it only
    return 0; 
}