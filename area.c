#include <stdio.h>

// calculate the area of a rectangle

int main() {
    int length = 10;
    int width = 5;

    int area = length * width;

    // can also add strings ands place holders within a print statement insetad
    // of making a seperate string variable
    printf("The area of a rectangle with length %d and width %d is = %d\n", length, width, area);

    return 0;
}