/*
 * Every C program uses libraries, always put at the start
 * stdio.h is standard input/output
 * we put the .h extension to indicate it's a header file
 * use <> for standard lib headers, "" for user defined headers
 */

#include <stdio.h> 

// put int here to indicate your returning and int var
// void main is not convention and may cause issues
int main() {
    printf("Hello, World!\n"); // \n creates a line break, similar to System.out.println in Java
    return 0; 
    // must return something to indicate the program ended successfully
    // 0 indicates success, 1 indicates failure, and other numbers can be used for specific error codes
}

/*
 * To compile and run this program, you can use the following commands in your terminal:
 * gcc helloworld.c -o helloworld   [compiles the code and creates an executable named 'helloworld']
 * shift + cntrl + b                [compiles the code using the build task in your code editor]
 * ./helloworld                     [runs the compiled executable]
 */