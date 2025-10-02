#include <stdio.h>

int incr(int x) {
    // The static keyword was missing
    static int call_counter = 0;
    call_counter += 1;
    printf(
        "incr() has been called %d times\n",
        call_counter
    );

    x += 1;

    return x;
}

int main() {
    int a = 10;
    float b = 3.14;

    while (a < 20) {
        // The return value of incr(a) has to be reassigned to a 
        // to update it with the new value
        a = incr(a);
    }

    // The type specifiers have to be %d for a (int) and %f for b (float)
    printf(
        "a is equal to %d and b is equal to %f\n", 
        a, b
    );

    return 0;
}