# Questions - Lesson 1

## Question 1
What flag do you need to use to tell the GCC compiler to compile a .c file into assembly?
### Answer
```-S```. For example: ```gcc -S main.c```

---
## Question 2
What flag do you need to use to tell the GCC compiler to use the second level of optimization?
### Answer
```-O2```. For example: ```gcc -O2 main.c```

---
## Question 3
How can you access the documentation/manual of a function in a Unix terminal?
### Answer
By typing ```man <function name>```. For example, to access the manual of the puts function you can type ```man puts```.

---
## Question 4
What is a preprocessor directive? Where is it usually found in a .c file?
### Answer
A preprocessor directive is a command that is handled by the C preprocessor before the actual compilation begins. It usually starts with the # symbol (e.g., #include, #define, #ifdef).
These directives are typically found at the top of a .c file, before the main code. For example:
```
#include <stdio.h>
#define PI 3.14159
```
