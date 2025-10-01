#include <stdio.h>

int sum(int a, int b) {
    // The function was missing the return statement and the 
    // a + b expression
    return a + b;
}

// This function was missing its arguments
int diff(int a, int b) {
    return b - a;
}

int main() {
    // The variables a and b were missing their type declaration
    int a = 10;
    int b = 20;

    // The format specifier was %s (used for strings) instead of 
    // %d (used for integers)
    printf("The sum of 10 and 20 is: %d\n", sum(a, b));

    // The call to diff() was missing its arguments
    printf("The difference of 20 and 10 is: %d\n", diff(a, b));
    
    return 0;
}
