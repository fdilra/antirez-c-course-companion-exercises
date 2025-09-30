#include <stdio.h>

/* Solution: 
 * The code did not compile because it was missing the #include directive 
 * for the standard I/O header <stdio.h>. This header contains the declaration 
 * of the printf() function. Without it, the compiler does not know what printf() is.
 */
int main() {
    printf("Hello world!");
    return 0;
}
