#include <stdio.h>

/* 
 * Exercise:
 * The following program is supposed to:
 *  1. Increment the variable `a` until it reaches 20,
 *     while keeping track of how many times the function incr() is called.
 *  2. Print the final values of `a` and `b`.
 *
 * However, the program has some problems:
 *  - The call counter in incr() does not work as intended.
 *  - The while loop runs forever.
 *  - The final printf() prints incorrect values for `b`.
 *
 * Find and fix these issues so that the program works correctly.
 */

int incr(int x) {
    // TODO: the variable call_counter is supposed to count how many times
    // the function incr() is called, but a keyword is missing for it
    // to work as intended. Find it and fix it.
    int call_counter = 0;
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
        // TODO: this section causes the code to enter an infinite loop;
        // Ensure that after the loop ends, 'a' is equal to 20
        incr(a);
    }

    // TODO: what's wrong with this printf() call? Find the problem and fix it
    printf(
        "a is equal to %d and b is equal to %d\n", 
        a, b
    );

    return 0;
}